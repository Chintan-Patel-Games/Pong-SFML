#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace EventM {
    class EventManager {
    public:
        void pollEvents(RenderWindow* game_window); // Process all events
        bool isKeyPressed(sf::Keyboard::Key key);   // Check specific key
    };
}