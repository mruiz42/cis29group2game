//
// Created by michael on 1/21/20.
//
#ifndef CIS29GROUP2GAME_CHARACTER_H
#define CIS29GROUP2GAME_CHARACTER_H

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <string>
#include "../Coordinate.h"

const std::string death_sound_m_path = "share/audio/ff-death-scream-male.wav";
const std::string death_sound_f_path = "share/audio/ff-death-scream-female.wav";

namespace tact {
    class Character;
}

class tact::Character : public sf::Drawable {
protected:
    sf::SoundBuffer buffer;
    sf::Sound voice;
    sf::Texture texture;
    sf::Sprite sidebar_sprite;
	sf::Sprite character_Face1;
	sf::Sprite character_Face2;
    sf::Sprite map_sprite;
    std::string name;
    sf::IntRect Texture_Rect;
    Coordinate xy;
    bool attack_on;
    bool moved;
    bool defending;
    bool walking;
    unsigned int level;
    unsigned int experience;
    unsigned int hit_points;
    unsigned int mana_points;
    unsigned int attack;
    unsigned int defense;
    unsigned int speed;
    unsigned int special_attack;
    unsigned int special_defense;
    unsigned int walk_animation[1];
public:
    Character();
    Character(Coordinate xy);
    Character(int x, int y);
    Character(std::string);
    Character(const Character&) = default;
    sf::Texture& get_texture() { return this->texture; }
    sf::Sprite& get_sidebar_sprite() { return this->sidebar_sprite; }
    sf::Sprite& get_map_sprite() { return this->map_sprite; }
    std::string& get_name() { return this->name; }
    bool can_attack() { return attack_on; }
    bool is_moved() { return this->moved; }
    bool is_defending() { return this->defending; }
	bool is_walking() { return this->walking; }

	Coordinate* get_coordinate() { return &this->xy; }
    unsigned int get_level() { return this->level; }
    unsigned int get_experience() { return this->experience;}
    unsigned int get_hit_points() { return this->hit_points; }
    unsigned int get_mana_points() { return this->mana_points; }
    unsigned int get_attack() { return this->attack; }
    unsigned int get_defense() { return this->defense; }
    unsigned int get_speed() { return this->speed; }
    unsigned int get_special_attack() { return this->special_attack; }
    unsigned int get_special_defense() { return this->special_defense; }
	sf::Sprite get_character_Face1() { return this->character_Face1; }
	sf::Sprite get_character_Face2() { return this->character_Face2; }

    void setTexture(sf::Texture& texture) { this->texture = texture; }
    void set_sidebar_sprite(sf::Sprite& sidebar_sprite) {this->sidebar_sprite = sidebar_sprite; }
    void set_map_sprite(sf::Sprite& map_sprite) { this->map_sprite = map_sprite; }
    void set_name(std::string& name) { this->name = name; }
    void set_coordinate(int, int);
    void set_coordinate(Coordinate coordinate) { this->xy = coordinate; }
    void set_can_attack(bool attack_on) { this->attack_on = attack_on; }
    void set_moved(bool moved) { this->moved = moved; }
    void set_defending(bool defending) { this->defending = defending; }
    void set_walking(bool walking) { this->walking = walking; }
    void set_level(unsigned int level) { this->level = level;}
    void set_experience(unsigned int experience) { this->experience = experience; }
    void set_hit_points(unsigned int hit_points) { this->hit_points = hit_points; }
    void set_mana_points(unsigned int mana_points) { this->mana_points = mana_points; }
    void set_attack(unsigned int attack) {this->attack = attack; }
    void set_defense(unsigned int defense) { this->defense = defense; }
    void set_speed(unsigned int speed) { this->speed = speed; }
    void set_special_attack(unsigned int special_attack) { this->special_attack = special_attack; }
    void set_special_defense(unsigned int special_defense) {this->special_defense = special_defense; }
    void flip_map_sprite();
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    virtual void play_voice();
    void walk();
    void reset_pos();
	
	virtual ~Character();
};

#endif //CIS29GROUP2GAME_CHARACTER_H
