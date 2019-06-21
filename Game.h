#pragma once
#include <SFML/Graphics.hpp>
#include<string>
#include"MainMenu.h"

class Game
{
protected:
	MainMenu menu;
	sf::RenderWindow myWindow;
	void ProcessEvent()
	{
		sf::Event event;
		while (myWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				myWindow.close();

			}
		}
	}


public:
	Game() 
	{
		
	}

	
	void Run()
	{
	
		while (myWindow.isOpen())
		{
			
			ProcessEvent();
		
		
		}
		menu.Run();
	}
	void setGameState(int _gameState)
	{
	
	}
};