#ifndef INC_343GAME_WEAPONS_HPP
#define INC_343GAME_WEAPONS_HPP

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

class Weapons {
    public:
        Weapons();
        void initalize();
        void setWeapon(int range, int damage, sf::Sprite sprite, bool equipped);

        void setPosition(int x, int y);
        void damageMonster();
        void attack();

        sf::Sprite getSprite();


    private:
        sf::Sprite sprite;
        sf::Texture texture;
        int getRange();
        int getDamage();
        void setRange(int range);
        void setDamage(int damage);
        sf:Clock clock;
        int range;
        int damage;
        int x;
        int y;
        bool equipped;
        sf::SoundBuffer soundBuffer;
        sf::Sound sound;
};

#endif //INC_343GAME_WEAPONS_HPP
