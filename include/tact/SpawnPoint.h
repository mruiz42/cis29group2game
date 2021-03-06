//
// Created by michael on 1/21/20.
//

#ifndef CIS29GROUP2GAME_FORTRESS_H
#define CIS29GROUP2GAME_FORTRESS_H
#include "../Coordinate.h"

namespace tact {
    class SpawnPoint;
}

class tact::SpawnPoint {
private:
    unsigned int hit_points;
    Coordinate xy;
public:
    SpawnPoint();
    SpawnPoint(int x, int y) : xy(x, y) {}
    SpawnPoint(Coordinate xy) : xy(xy) {}
    unsigned int get_hit_points() { return this->hit_points; }
    Coordinate& get_coordinate() { return this->xy; }

    void set_hit_points(unsigned int hit_points) { this->hit_points = hit_points; }
    void set_coordinate(int, int);
};


#endif //CIS29GROUP2GAME_FORTRESS_H
