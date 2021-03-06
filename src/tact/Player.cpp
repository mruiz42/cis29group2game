//
// Created by michael on 2/20/20.
//

#include "../../include/tact/Player.h"

using namespace tact;

Player::Player(){
    is_turn = false;
    number_units = 3;

	// Delete should be called when each sprite dies and destructors must be included in each derived class
    squadron.push_back(new Ninja(spawn_point.get_coordinate().get_x() + 0 - 1, spawn_point.get_coordinate().get_y() + 0 - 1));
	squadron.push_back(new Mage(spawn_point.get_coordinate().get_x() + 1 - 1, spawn_point.get_coordinate().get_y() + 1 - 1));
	squadron.push_back(new Tank(spawn_point.get_coordinate().get_x() + 2 - 1, spawn_point.get_coordinate().get_y() + 2 - 1));
}

Player::Player(int id, Coordinate xy) : player_id(id), spawn_point(xy) {
    is_turn = false;
    number_units = 3;

	// Delete should be called when each sprite dies and destructors must be included in each derived class
	squadron.push_back(new Tank(spawn_point.get_coordinate().get_x() + 0 - 1, spawn_point.get_coordinate().get_y() + 0 - 1));
	squadron.push_back(new Mage(spawn_point.get_coordinate().get_x() + 1 - 1, spawn_point.get_coordinate().get_y() + 1 - 1));
	squadron.push_back(new Ninja(spawn_point.get_coordinate().get_x() + 2 - 1, spawn_point.get_coordinate().get_y() + 2 - 1));
}

Player::~Player() {
	//std::cout << "Player dtor called.\n"; 
}

Character* Player::get_next_character(int iterator) {
    for (auto i = iterator; i < squadron.size(); i++) {
        Character* c_ptr = squadron[i];
        if (c_ptr->is_moved()){
            continue;
        }
        else {
            return c_ptr;
        }
    }
    return nullptr;
}

void Player::reset_squadron_exhaustion() {
    for (auto i = 0; i < squadron.size(); i++) {
        this->squadron[i]->set_moved(false);
        this->squadron[i]->set_defending(false);
        this->squadron[i]->set_can_attack(false);
    }
}

bool Player::is_turn_end() {
    bool is_end = true;
    for (auto i = 0; i < squadron.size(); i++) {
        if (!this->squadron[i]->is_moved() || this->squadron[i]->can_attack()){
            is_end = false;
        }
    }
    return is_end;
}
