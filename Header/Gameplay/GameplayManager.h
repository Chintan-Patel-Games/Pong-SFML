#pragma once
#include "../../Header/Gameplay/Paddle/Paddle.h"
#include "../../Header/Gameplay/Ball/Ball.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/Gameplay/Boundary/Boundary.h"

using namespace EventM;

namespace Gameplay {
	class GameplayManager {
	private:
		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;

		Ball* ball = nullptr;
		Paddle* player1 = nullptr;
		Paddle* player2 = nullptr;
		EventManager* event_manager;
		Boundary* boundary;

		void initialize();

	public:
		GameplayManager(EventManager* manager);
		void update();
		void render(RenderWindow* game_window);
	};
}