// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CHAT_H_
#define FLATBUFFERS_GENERATED_CHAT_H_

#include "flatbuffers/flatbuffers.h"

struct ChatReq;
struct ChatReqBuilder;
struct ChatReqT;

struct ChatResp;
struct ChatRespBuilder;
struct ChatRespT;

struct ChatSync;
struct ChatSyncBuilder;
struct ChatSyncT;

struct ChatReqT : public flatbuffers::NativeTable {
  typedef ChatReq TableType;
  std::string chat;
  ChatReqT() {
  }
};

struct ChatReq FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ChatReqT NativeTableType;
  typedef ChatReqBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CHAT = 4
  };
  const flatbuffers::String *chat() const {
    return GetPointer<const flatbuffers::String *>(VT_CHAT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CHAT) &&
           verifier.VerifyString(chat()) &&
           verifier.EndTable();
  }
  ChatReqT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ChatReqT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ChatReq> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ChatReqT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ChatReqBuilder {
  typedef ChatReq Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_chat(flatbuffers::Offset<flatbuffers::String> chat) {
    fbb_.AddOffset(ChatReq::VT_CHAT, chat);
  }
  explicit ChatReqBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChatReqBuilder &operator=(const ChatReqBuilder &);
  flatbuffers::Offset<ChatReq> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ChatReq>(end);
    return o;
  }
};

inline flatbuffers::Offset<ChatReq> CreateChatReq(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> chat = 0) {
  ChatReqBuilder builder_(_fbb);
  builder_.add_chat(chat);
  return builder_.Finish();
}

inline flatbuffers::Offset<ChatReq> CreateChatReqDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *chat = nullptr) {
  auto chat__ = chat ? _fbb.CreateString(chat) : 0;
  return CreateChatReq(
      _fbb,
      chat__);
}

flatbuffers::Offset<ChatReq> CreateChatReq(flatbuffers::FlatBufferBuilder &_fbb, const ChatReqT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct ChatRespT : public flatbuffers::NativeTable {
  typedef ChatResp TableType;
  int32_t result;
  ChatRespT()
      : result(0) {
  }
};

struct ChatResp FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ChatRespT NativeTableType;
  typedef ChatRespBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RESULT = 4
  };
  int32_t result() const {
    return GetField<int32_t>(VT_RESULT, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_RESULT) &&
           verifier.EndTable();
  }
  ChatRespT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ChatRespT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ChatResp> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ChatRespT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ChatRespBuilder {
  typedef ChatResp Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_result(int32_t result) {
    fbb_.AddElement<int32_t>(ChatResp::VT_RESULT, result, 0);
  }
  explicit ChatRespBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChatRespBuilder &operator=(const ChatRespBuilder &);
  flatbuffers::Offset<ChatResp> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ChatResp>(end);
    return o;
  }
};

inline flatbuffers::Offset<ChatResp> CreateChatResp(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t result = 0) {
  ChatRespBuilder builder_(_fbb);
  builder_.add_result(result);
  return builder_.Finish();
}

flatbuffers::Offset<ChatResp> CreateChatResp(flatbuffers::FlatBufferBuilder &_fbb, const ChatRespT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct ChatSyncT : public flatbuffers::NativeTable {
  typedef ChatSync TableType;
  std::string chat;
  ChatSyncT() {
  }
};

struct ChatSync FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ChatSyncT NativeTableType;
  typedef ChatSyncBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CHAT = 4
  };
  const flatbuffers::String *chat() const {
    return GetPointer<const flatbuffers::String *>(VT_CHAT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CHAT) &&
           verifier.VerifyString(chat()) &&
           verifier.EndTable();
  }
  ChatSyncT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ChatSyncT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ChatSync> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ChatSyncT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ChatSyncBuilder {
  typedef ChatSync Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_chat(flatbuffers::Offset<flatbuffers::String> chat) {
    fbb_.AddOffset(ChatSync::VT_CHAT, chat);
  }
  explicit ChatSyncBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChatSyncBuilder &operator=(const ChatSyncBuilder &);
  flatbuffers::Offset<ChatSync> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ChatSync>(end);
    return o;
  }
};

inline flatbuffers::Offset<ChatSync> CreateChatSync(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> chat = 0) {
  ChatSyncBuilder builder_(_fbb);
  builder_.add_chat(chat);
  return builder_.Finish();
}

inline flatbuffers::Offset<ChatSync> CreateChatSyncDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *chat = nullptr) {
  auto chat__ = chat ? _fbb.CreateString(chat) : 0;
  return CreateChatSync(
      _fbb,
      chat__);
}

flatbuffers::Offset<ChatSync> CreateChatSync(flatbuffers::FlatBufferBuilder &_fbb, const ChatSyncT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ChatReqT *ChatReq::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<ChatReqT> _o = std::unique_ptr<ChatReqT>(new ChatReqT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ChatReq::UnPackTo(ChatReqT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = chat(); if (_e) _o->chat = _e->str(); }
}

inline flatbuffers::Offset<ChatReq> ChatReq::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ChatReqT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateChatReq(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ChatReq> CreateChatReq(flatbuffers::FlatBufferBuilder &_fbb, const ChatReqT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ChatReqT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _chat = _o->chat.empty() ? 0 : _fbb.CreateString(_o->chat);
  return CreateChatReq(
      _fbb,
      _chat);
}

inline ChatRespT *ChatResp::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<ChatRespT> _o = std::unique_ptr<ChatRespT>(new ChatRespT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ChatResp::UnPackTo(ChatRespT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = result(); _o->result = _e; }
}

inline flatbuffers::Offset<ChatResp> ChatResp::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ChatRespT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateChatResp(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ChatResp> CreateChatResp(flatbuffers::FlatBufferBuilder &_fbb, const ChatRespT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ChatRespT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _result = _o->result;
  return CreateChatResp(
      _fbb,
      _result);
}

inline ChatSyncT *ChatSync::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<ChatSyncT> _o = std::unique_ptr<ChatSyncT>(new ChatSyncT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ChatSync::UnPackTo(ChatSyncT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = chat(); if (_e) _o->chat = _e->str(); }
}

inline flatbuffers::Offset<ChatSync> ChatSync::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ChatSyncT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateChatSync(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ChatSync> CreateChatSync(flatbuffers::FlatBufferBuilder &_fbb, const ChatSyncT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ChatSyncT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _chat = _o->chat.empty() ? 0 : _fbb.CreateString(_o->chat);
  return CreateChatSync(
      _fbb,
      _chat);
}

#endif  // FLATBUFFERS_GENERATED_CHAT_H_
