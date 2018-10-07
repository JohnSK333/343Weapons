#ifndef INC_343GAME_SWORD_HPP
#define INC_343GAME_SWORD_HPP

#include "Weapons.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

class Sword : public Weapons{
    public:
    Sword();

    private:
    sf::Texture texture;
    sf::Sprite sprite;

};

#endif //INC_343GAME_SWORD_HPP
