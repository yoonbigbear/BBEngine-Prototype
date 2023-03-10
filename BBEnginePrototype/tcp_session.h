#pragma once

#include "packet_buffer.h"
#include "recv_buffer.h"
#include <asio.hpp>
#include <deque>
#include <memory>

using tcp = asio::ip::tcp;

class TcpSession
{
public:
    TcpSession(asio::io_context& io_context, tcp::socket socket)
        :io_context_(io_context)
        , socket_(std::move(socket)) {}
    virtual ~TcpSession() {}
    virtual void Initialize()
    {
        socket_.set_option(tcp::no_delay(true));
        Read();
    }
    virtual void Disconnect()
    {
        if (IsConnected())
        {
            asio::post(io_context_, [this]() {socket_.close(); });
        }
    }

    void Send(char* buf, size_t size)
    {
        Write(buf, size);
        //asio::post(io_context_, [&]() {Write(buf, size); });
        
    }
    void Send(std::vector<uint8_t>& buf)
    {
        Write(buf, buf.size());
        //asio::post(io_context_, [&]() {Write(buf, buf.size()); });
    }
    bool IsConnected() const
    {
        return socket_.is_open();
    }

protected:

    void Write(std::vector<uint8_t>& buf, size_t size)
    {
        asio::async_write(socket_, asio::buffer(buf.data(), size),
            [this](asio::error_code ec, std::size_t /*length*/)
            {
                if (!ec)
                {

                }
                else
                {
                    /*room_.leave(shared_from_this());*/
                }
            });
    }
    void Write(const char* buf, size_t size)
    {
        asio::async_write(socket_, asio::buffer(buf, size),
            [this](asio::error_code ec, std::size_t /*length*/)
            {
                if (!ec)
                {

                }
                else
                {
                    /*room_.leave(shared_from_this());*/
                }
            });
    }
    void Read()
    {
        recv_buffer_.fill(0);
        socket_.async_read_some(asio::buffer(recv_buffer_, 0xFFFF),
            [this](asio::error_code ec, std::size_t length)
            {
                if (!ec)
                {
                    if (length > 0)
                    {
                        PacketHeader header;
                        memmove(&header, recv_buffer_.data(), sizeof(PacketHeader));
                        std::vector<uint8_t>body_vec(header.size);
                        memmove(body_vec.data(), recv_buffer_.data() + sizeof(PacketHeader), header.size);
                        recv_packets_.Add(header.id, std::move(body_vec));
                        Read();
                    }
                }
                else
                {
                    /*room_.leave(shared_from_this());*/
                }
            });
    }

public:
    RecvBuffer& recv_buffer() { return recv_packets_; }

protected:
    tcp::socket socket_;
    RecvBuffer recv_packets_;
    std::array<uint8_t, 0xFFFF> recv_buffer_;
    asio::io_context& io_context_;
    std::deque<std::vector<uint8_t>> send_buffer_;
};