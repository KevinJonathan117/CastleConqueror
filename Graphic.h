#pragma once
#include<SFML/Graphics.hpp>
#include"Util.h"


class CastleLevelOne
{
private:
	sf::RenderWindow myWindow;
	sf::RectangleShape myCastle;
	sf::Texture myTexture;
public:
	CastleLevelOne()
	{
		myTexture.loadFromFile("Graphics/Sprite/Castle-Own-1.png");
		myCastle.setTexture(&myTexture);
		myCastle.setSize(sf::Vector2f(100, 100));
	}

	void draw(sf::RenderWindow &window, float x, float y)
	{
		myCastle.setPosition(x, y);
		window.draw(myCastle);
	}
};

class CastleLevelTwo
{
private:
	sf::RenderWindow myWindow;
	sf::RectangleShape myCastle;
	sf::Texture myTexture;
public:
	CastleLevelTwo()
	{
		myTexture.loadFromFile("Graphics/Sprite/Castle-Own-2.png");
		myCastle.setTexture(&myTexture);
		myCastle.setSize(sf::Vector2f(150, 150));
	}

	void draw(sf::RenderWindow &window, float x, float y)
	{
		myCastle.setPosition(x, y);
		window.draw(myCastle);
	}
};

class CastleLevelThree
{
private:
	sf::RenderWindow myWindow;
	sf::RectangleShape myCastle;
	sf::Texture myTexture;
public:
	CastleLevelThree()
	{
		myTexture.loadFromFile("Graphics/Sprite/Castle-Own-3.png");
		myCastle.setTexture(&myTexture);
		myCastle.setSize(sf::Vector2f(100, 100));
	}

	void draw(sf::RenderWindow &window,float x, float y)
	{
		myCastle.setPosition(x, y);
		window.draw(myCastle);
	}
};

class CastleEnemy
{
private:
	sf::RenderWindow myWindow;
	sf::RectangleShape myCastle;
	sf::Texture myTexture;
public:
	CastleEnemy()
	{
		myTexture.loadFromFile("Graphics/Sprite/Castle-Enemy.png");
		myCastle.setTexture(&myTexture);
		myCastle.setSize(sf::Vector2f(75, 75));
	}

	void draw(sf::RenderWindow &window, float x, float y)
	{
		myCastle.setPosition(x, y);
		window.draw(myCastle);
	}
};