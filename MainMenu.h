//#pragma once
//#include<SFML/Graphics.hpp>
//#include<iostream>
//
//class MainMenuMaster
//{
//private:
//	int Selection;
//	bool _menuIsActive = true;
//public:
//	MainMenuMaster()
//	{
//		Selection = 0;
//	}
//	void MenuHandle()
//	{
//
//	}
//};


#pragma once
#include <SFML/Graphics.hpp>
#include<string>

class MainMenu
{
protected:
	//general
	sf::RenderWindow myWindow;
	sf::RectangleShape myCastle;
	sf::Texture myTexture;
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


	int gameState = 0;

	void ProcessEvent()
	{
		sf::Event event;
		while (myWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				myWindow.close();
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

					}

					if (ContinueImage.getGlobalBounds().contains(mousePosF))
					{

					}

					if (SettingImage.getGlobalBounds().contains(mousePosF))
					{

					}
					if (CreditsImage.getGlobalBounds().contains(mousePosF))
					{

					}
				}
			}
			else
			{

			}
		}
	}
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
		else
		{
			myWindow.draw(myCastle);
		}
		myWindow.display();
	}
public:
	MainMenu() : myWindow(sf::VideoMode(1280, 720), "Castle Conqueror"), myCastle()
	{
		//test
		myTexture.loadFromFile("Castle-Own-3.png");
		myCastle.setTexture(&myTexture);
		myCastle.setSize(sf::Vector2f(500, 500));
		myCastle.setPosition(100.f, 100.f);
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
	}
};