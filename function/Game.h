/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

enum class  Easing
{
	easeLinear,
	easeInSine
};



class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupFontAndText();
	void setupSprite();

	float easingFunction(float t_x);
	Easing m_currentEasingFunction{ Easing::easeInSine };


	void drawEasing();
	sf::VertexArray m_functionOutline;
	void functionOutline();
	void setupAxis(int t_xMax, int t_yMax);
	void drawAxis();
	sf::VertexArray m_axis;
	const float ORIGIN_X = 100.0f;
	const float ORIGIN_Y = 500.0f;
	const float SCALEX = 400.0f;
	const float SCALEY = 400.0f;


	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

