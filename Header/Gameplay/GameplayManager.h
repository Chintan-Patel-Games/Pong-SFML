#pragma once
#include "../../Header/Gameplay/Paddle/Paddle.h"
#include "../../Header/Gameplay/Ball/Ball.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/Gameplay/Boundary/Boundary.h"
#include "../../Header/Utility/TimeService.h"
#include "../../Header/UI/UIService.h"

using namespace EventM;
using namespace Utility;
using namespace UI;

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
		TimeService* time_service;
		UIService* ui_service;

		void initialize();
		void UpdateScore();
		void resetPlayers();

	public:
		GameplayManager(EventManager* manager);
		void update();
		void render(RenderWindow* game_window);
	};
}