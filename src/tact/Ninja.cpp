//
// Created by michael on 1/21/20.
//

#include "../../include/tact/Ninja.h"

using namespace tact;

Ninja::Ninja() : Character() {
    try {
        if (!texture.loadFromFile(ninja_spritesheet_path)){
            throw(ninja_spritesheet_path);
        }
    }
    catch(const std::string& error){
        std::cout << "Could not load " <<  error << " from file." << std::endl;
    }
    sidebar_sprite.setTexture(texture);
	character_Face1.setTexture(texture);
    character_Face1.setTextureRect(sf::IntRect(8,400,64,87));
	character_Face2.setTexture(texture);
    character_Face2.setTextureRect(sf::IntRect(272,400,64,87));
    map_sprite.setTexture(texture);
    map_sprite.setTextureRect(sf::IntRect(1,13,32,32));
    this->name = "Ninja";
    this->level = 10;
    this->experience = 0;
    this->hit_points = 160;
    this->mana_points = 10;
    this->attack = 30;
    this->defense = 20;
    this->speed = 42;
    this->special_attack = 23;
    this->special_defense = 26;
}

Ninja::Ninja(int x, int y) : Character(x, y) {
    try {
        if (!texture.loadFromFile(ninja_spritesheet_path)){
            throw(ninja_spritesheet_path);
        }
    }
    catch(const std::string& error){
        std::cout << "Could not load " <<  error << " from file." << std::endl;
    }
    sidebar_sprite.setTexture(texture);
	character_Face1.setTexture(texture);
    character_Face1.setTextureRect(sf::IntRect(8,400,64,87));
	character_Face2.setTexture(texture);
    character_Face2.setTextureRect(sf::IntRect(272,400,64,87));
    map_sprite.setTexture(texture);
    map_sprite.setTextureRect(sf::IntRect(1,13,32,32));
    this->name = "Ninja";
    this->level = 1;
    this->experience = 0;
    this->hit_points = 160;
    this->mana_points = 10;
    this->attack = 30;
    this->defense = 20;
    this->speed = 42;
    this->special_attack = 23;
    this->special_defense = 26;
}

Ninja::~Ninja() {
	std::cout << "Ninja dtor called.\n"; 
}