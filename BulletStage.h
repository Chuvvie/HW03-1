#ifndef BULLETSTAGE_H_INCLUDED
#define BULLETSTAGE_H_INCLUDED

#include <vector>
#include <SFML/Graphics.hpp>
#include "Vector2Plus.h"
#include "Player.h"

class BulletStage {
private:
    sf::RectangleShape innerBox;
    vec2f dimension;
    vec2f position;
    Player player;
public:
    BulletStage();
    void handleInput(const vec2i& mouse);
    void update(float dt);
    void render(sf::RenderWindow& window) const ;
    vec2f getDimension() {return dimension;}
    vec2f getPosition() {return position;}
    vec2f clamp(const vec2f point, const vec2f dimension) const;
};

#endif // BULLETSTAGE_H_INCLUDED
