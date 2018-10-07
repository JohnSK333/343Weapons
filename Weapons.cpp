#include "Weapons.hpp"
#include "SFML/Graphics.hpp"
#include "Settings.hpp"
#include <iostream>

void Weapons::initalize(){
    range = 0;
    damage = 0;
    equipped = false;
    clock = 0;
}
void Weapons::setWeapon(int range, int damage, sf::Sprite sprite,bool equipped){
    this->range = range;
    this->damage = damage;
    this->sprite = sprite;
    this->equipped = equipped;
}

void Weapons::setRange(int range){
    this->range = range;
}

int Weapons::getRange(){
    return range;
}

void Weapons::setDamage(int damage){
    this->damage = damage;
}

int Weapons::getDamage(){
    return damage;
}
void Weapons::setPosition(int x, int y){
    this->x = x;
    this->y = y;
}

void Weapons::damageMonster(Monster::Monster x){
    Monster::setLife(Monster::getLife() - Weapons::getDamage());
}

sf::Sprite Weapons::getSprite(){
    sprite.setTexture(texture);
    this->sprite;
}