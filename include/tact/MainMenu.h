
// Menu.cpp
// Created by michael on 1/28/20.
//

#ifndef CIS29GROUP2GAME_MAINMENU_H
#define CIS29GROUP2GAME_MAINMENU_H

#include <SFML/Audio.hpp>
#include <SFML/Audio/Sound.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Font.hpp>

#define MAX_NUMBER_OF_ITEMS 3

class MainMenu {
public:
    float width;
    float height;
    MainMenu(float w, float h);
    ~MainMenu();
    void draw(sf::RenderWindow &window);
    void draw_instruction(sf::RenderWindow &window);
    void moveUp();
    void moveDown();
    int getSelectedIdx(){return selectedItemIndex;}
private:
    
    int selectedItemIndex;
    sf::Font font;
    sf::Text main_menu[MAX_NUMBER_OF_ITEMS];
    sf::Text instructions[5];
    //void makeMenu();
};
#endif //CIS29GROUP2GAME_MENU_H