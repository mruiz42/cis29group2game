//
// Created by michael on 1/21/20.
//

#include "../../include/tact/Mage.h"

using namespace tact;

Mage::Mage() : Character() {
    if (!texture.loadFromFile(mage_spritesheet_path)){
        std::cout << "Error: " + mage_spritesheet_path + " could not be loaded." << std::endl;
    }
    sidebar_sprite.setTexture(texture);
	character_Face1.setTexture(texture);
    character_Face1.setTextureRect(sf::IntRect(8,406,84,100));
	character_Face2.setTexture(texture);
    character_Face2.setTextureRect(sf::IntRect(272,405,84,100));
    map_sprite.setTexture(texture);
    map_sprite.setTextureRect(sf::IntRect(1,13,32,32));
    this->name = "Mage";
    this->level = 10;
    this->experience = 0;
    this->hit_points = 120;
    this->mana_points = 427;
    this->attack = 38;
    this->defense = 21;
    this->speed = 36;
    this->special_attack = 56;
    this->special_defense = 67;
}

Mage::Mage(int x, int y) : Character(x, y) {
    if (!texture.loadFromFile(mage_spritesheet_path)){
        std::cout << "Error: " + mage_spritesheet_path + " could not be loaded." << std::endl;
    }
    sidebar_sprite.setTexture(texture);
	character_Face1.setTexture(texture);
    character_Face1.setTextureRect(sf::IntRect(8,406,84,100));
	character_Face2.setTexture(texture);
    character_Face2.setTextureRect(sf::IntRect(272,405,84,100));
    map_sprite.setTexture(texture);
    map_sprite.setTextureRect(sf::IntRect(1,13,32,32));
    this->name = "Mage";
    this->level = 10;
    this->experience = 0;
    this->hit_points = 120;
    this->mana_points = 427;
    this->attack = 38;
    this->defense = 21;
    this->speed = 36;
    this->special_attack = 56;
    this->special_defense = 67;
}

Mage::~Mage() {
	std::cout << "Mage dtor called.\n"; 
}