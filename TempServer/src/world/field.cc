#include "field.h"

void Field::Initialize(const AABB2& bound)
{
    boundary_ = bound;
}

bool Field::Spawn(const vec2& pos, const AABB2& box, void* entity_data,
    int32_t& out_proxy)
{
    if (Contains(box) && Contains(pos))
    {
        out_proxy = broad_phase_.CreateProxy(box, entity_data);
        return true;
    }
    return false;
}

Vector<void*> Field::Query(const vec2& pos, float range)
{
    auto sight_half = range * 0.5f;
    auto sight = AABB2();
    sight.lowerBound.x = pos.x - sight_half;
    sight.lowerBound.y = pos.y - sight_half;
    sight.upperBound.x = pos.x + sight_half;
    sight.upperBound.y = pos.y + sight_half;

    BroadPhaseBox collisions;
    broad_phase_.Query<BroadPhaseBox>(&collisions, sight);
    Vector<void*> targets;

    for (auto& target : collisions.collisions)
    {
        targets.push_back(broad_phase_.GetUserData(target));
    }
    return targets;
}