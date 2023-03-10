#pragma once

#ifdef _BOX2D
using vec = union
{
    b2Vec2 v2;
    b2Vec3 v3;
};
using vec2 = b2Vec2;
using vec3 = b2Vec3;
using AABB2 = b2AABB;
#elif _BBENGINE
using vec = union
{
    Vector2 v2;
    Vector3 v3;
};
using vec2 = Vector2;
using vec3 = Vector3;
#else
using vec = union
{
    float v2[2];
    float v3[3];
};
using vec2 = float[2];
using vec3 = float[3];
#endif

template<typename T>
using Unique = std::unique_ptr<T>;
template<typename T>
using Shared = std::shared_ptr<T>;
template<typename T>
using Weak = std::weak_ptr<T>;

using String = std::string;

template<typename T>
using Vector = std::vector<T>;
template<typename _Key, typename _Val>
using UnorderedMap = std::unordered_map<_Key, _Val>;

template<typename T>
inline T VecToXYZ(const vec& v)
{
    return T(v.v3.x, v.v3.z, v.v3.y);
}

template<typename T>
inline vec VecToXZY(const T& v)
{
    return vec(v.x, v.z, v.y);
}