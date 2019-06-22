#pragma once
#include <SFML/Graphics.hpp>
#include<string>
<<<<<<< HEAD
#include"MainMenu.h"
=======
#include "Object.h"
>>>>>>> updated the file as of 22 june

class Game
{
protected:
<<<<<<< HEAD
	MainMenu menu;
	sf::RenderWindow myWindow;
=======
	//general
	sf::RenderWindow myWindow;

	//mainmenu
	sf::Texture background;
	sf::Sprite backgroundImage;
	sf::Texture exitButton;
	sf::Sprite exitButtonImage;
	sf::Sprite NewGameImage;
	sf::Texture NewGame;
	sf::Sprite ContinueImage;
	sf::Texture Continue;
	sf::Sprite SettingImage;
	sf::Texture Setting;
	sf::Sprite TitleImage;
	sf::Texture Title;
	sf::Sprite CreditsImage;
	sf::Texture Credits;
	int page;
	BaseCastle *BaseCastle[5];

	int gameState = 0;

>>>>>>> updated the file as of 22 june
	void ProcessEvent()
	{
		sf::Event event;
		while (myWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				myWindow.close();
<<<<<<< HEAD
=======
			}
			if (gameState == 0) // main menu
			{
				if (event.type == sf::Event::MouseMoved)
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(myWindow);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (exitButtonImage.getGlobalBounds().contains(mousePosF))
					{
						exitButtonImage.setColor(sf::Color(250, 20, 20));
					}
					else
					{
						exitButtonImage.setColor(sf::Color(255, 255, 255));
					}

					if (NewGameImage.getGlobalBounds().contains(mousePosF))
					{
						NewGameImage.setColor(sf::Color(250, 20, 20));
					}
					else
					{
						NewGameImage.setColor(sf::Color(255, 255, 255));
					}

					if (ContinueImage.getGlobalBounds().contains(mousePosF))
					{
						ContinueImage.setColor(sf::Color(250, 20, 20));
					}
					else
					{
						ContinueImage.setColor(sf::Color(255, 255, 255));
					}

					if (SettingImage.getGlobalBounds().contains(mousePosF))
					{
						SettingImage.setColor(sf::Color(250, 20, 20));
					}
					else
					{
						SettingImage.setColor(sf::Color(255, 255, 255));
					}

					if (CreditsImage.getGlobalBounds().contains(mousePosF))
					{
						CreditsImage.setColor(sf::Color(250, 20, 20));
					}
					else
					{
						CreditsImage.setColor(sf::Color(255, 255, 255));
					}
				}
				if (event.type == sf::Event::MouseButtonPressed)
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(myWindow);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));

					if (exitButtonImage.getGlobalBounds().contains(mousePosF))
					{
						myWindow.close();

					}
					if (NewGameImage.getGlobalBounds().contains(mousePosF))
					{
						gameState = 1;
					}

					if (ContinueImage.getGlobalBounds().contains(mousePosF))
					{
						gameState = 2;
					}

					if (SettingImage.getGlobalBounds().contains(mousePosF))
					{
						gameState = 3;
					}
					if (CreditsImage.getGlobalBounds().contains(mousePosF))
					{
						gameState = 4;
					}
				}
				if (page == 1)
				{

				}
			}
			else if (gameState == 1){

			}
			else if (gameState == 2) {

			}
			else if (gameState == 3) {

			}
			else if (gameState == 4) {
>>>>>>> updated the file as of 22 june

			}
		}
	}
<<<<<<< HEAD


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
	
=======
	void Update()
	{
		if (gameState == 0) // main menu
		{

		}
		else
		{

		}
	}
	void Render()
	{
		myWindow.clear();
		if (gameState == 0) // main menu
		{
			myWindow.draw(backgroundImage);
			myWindow.draw(exitButtonImage);
			myWindow.draw(NewGameImage);
			myWindow.draw(ContinueImage);
			myWindow.draw(SettingImage);
			myWindow.draw(TitleImage);
			myWindow.draw(CreditsImage);
		}
		else if (gameState == 1)
		{
			BaseCastle[0]->drawCastle(myWindow,100.f,100.f);
			BaseCastle[1]->drawCastle(myWindow,400.f,500.f);
			BaseCastle[2]->drawCastle(myWindow, 600.f, 50.f);
			BaseCastle[3]->drawCastle(myWindow, 800.f, 600.f);
			BaseCastle[4]->drawCastle(myWindow, 1000.f, 400.f);
		}
		else if (gameState == 2){

		}
		else if (gameState == 3){

		}
		else if (gameState == 4){
		
		}
		myWindow.display();
	}
public:
	Game() : myWindow(sf::VideoMode(1280, 720), "Castle Conqueror")
	{
		//castle
		srand(time(NULL)); int starterCastle = rand() % 5;
		for (int i = 0; i < 5; i++) {
			if (i == starterCastle) {
				BaseCastle[i] = new CastleLv1;
			}
			else {
				BaseCastle[i] = new EnemyCastle;
			}
		}
	

		//main menu
		background.loadFromFile("Graphics/JhXcPc.png");
		backgroundImage.setTexture(background);

		exitButton.loadFromFile("Graphics/UI/QuitButton.png");
		exitButtonImage.setPosition(50.0f, 600.0f);
		exitButtonImage.setTexture(exitButton);

		NewGame.loadFromFile("Graphics/UI/StartButton.png");
		NewGameImage.setTexture(NewGame);
		NewGameImage.setPosition(50.0f, 300.0f);

		Continue.loadFromFile("Graphics/UI/ContinueButton.png");
		ContinueImage.setTexture(Continue);
		ContinueImage.setPosition(50.0f, 400.0f);

		Setting.loadFromFile("Graphics/UI/SettingsButton.png");
		SettingImage.setTexture(Setting);
		SettingImage.setPosition(50.0f, 500.0f);

		Title.loadFromFile("Graphics/Logo/TitleCastle.png");
		TitleImage.setTexture(Title);
		TitleImage.setPosition(275.0f, 0);

		Credits.loadFromFile("Graphics/UI/CreditsButton.png");
		CreditsImage.setTexture(Credits);
		CreditsImage.setPosition(1025.0f, 600.0f);
	}
	void Run()
	{
		while (myWindow.isOpen())
		{
			ProcessEvent();
			Update();
			Render();
		}
	}



	void setGameState(int _gameState)
	{
		gameState = _gameState;
>>>>>>> updated the file as of 22 june
	}
};