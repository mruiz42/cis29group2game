//
// Created by michael on 1/21/20.
//

#include "../../include/tact/Fortress.h"

Fortress::Fortress() {
    hit_points = 0;
    xy.x = 0;
    xy.y = 0;
}
void Fortress::set_coordinate(int x, int y) {
    xy.set_coordinate(x, y);
}