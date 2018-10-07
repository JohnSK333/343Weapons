#include "Sword.hpp"
#include "Player.hpp"
#include "SFML/Graphics.hpp"
#include "Settings.hpp"
#include <iostream>

Sword::Sword() {
    if (!Sword::texture.loadFromFile("sprites/sword.png")){
    std::cerr << "Can't load sprite." << std::endl;
    exit(EXIT_FAILURE);
    }
    sprite = Weapons::getSprite();
    sprite.setTexture(texture);
    sf::FloatRect spriteSize = sprite.getGlobalBounds();
    sprite.setOrigin(spriteSize.width/2.0,spriteSize.height/2.0);
    initalize();
    Sword::setWeapon(3,10,sprite,true);
    sprite.setPosition(Player::getX(),Player::getY());
    Sword::setPosition(Player::getX(),Player::getY());
}


