//Copyright (c) 2020 Ultimaker B.V.
//CuraEngine is released under the terms of the AGPLv3 or higher.

#include "ExtrusionJunction.hpp"

namespace Slic3r::Arachne
{

bool ExtrusionJunction::operator ==(const ExtrusionJunction& other) const
{
    return p == other.p
        && w == other.w
        && perimeter_index == other.perimeter_index
        && hole_compensation_flag == other.hole_compensation_flag;
}

ExtrusionJunction::ExtrusionJunction(const Point p, const coord_t w, const coord_t perimeter_index, const bool compensation_flag) : p(p), w(w), perimeter_index(perimeter_index),hole_compensation_flag(compensation_flag) {}

}
