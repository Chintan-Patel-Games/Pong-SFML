#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"
using namespace sf;
using namespace std;

namespace Gameplay {
    class Ball {
    private:
        float ball_speed = .25f;
        Vector2f velocity = Vector2f(ball_speed, ball_speed);

        Texture pong_ball_texture;
        Sprite pong_ball_sprite;
        string texture_path = "Assets/Textures/Ball.png";

        const float scale_x = 0.06f;
        const float scale_y = 0.06f;

        const float top_boundary = 20.0f;
        const float bottom_boundary = 700.0f;
        
        const float left_boundary = 0.0f;
        const float right_boundary = 1280.0f;

        //Center Position
        const float center_position_x = 615.0f;
        const float center_position_y = 325.0f;

        void loadTexture();
        void initializeVariables();
        void move();
        void handlePaddleCollision(Paddle* player1, Paddle* player2);
        void handleBoudaryCollision();
        void handleOutofBoundCollision();
        void reset();
        void onCollision(Paddle* player1, Paddle* player2);

    public:
        Ball();
        void update(Paddle* player1, Paddle* player2);
        void render(RenderWindow* game_window);
    };
}