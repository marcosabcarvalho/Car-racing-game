#ifndef SPLASHSTATE_HPP
#define SPLASHSTATE_HPP
#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"

namespace cp
{
	class SplashState : public State
	{
	private:
	  GameDataRef data;
	  sf::Clock clock;
	  sf::Sprite background_sprite;
	public:
		SplashState(GameDataRef _data);
		// ~SplashState();

		void init();
		void handle_input();
		void draw(float delta);
		void update(float delta);
	};
}

#endif //SPLASHSTATE_HPP