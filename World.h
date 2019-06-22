#pragma once
#include<SFML/Graphics.hpp>
#include"Object.h"
#include"Util.h"
#include<iostream>

class Level
{
private:
	int levelState;
	sf::RenderWindow Level1, Level2, Level3;
	BaseCastle *BaseCastle[4];


public:
	Level()
	{
		//spawn castlemu sama musuh
	}

	void setCastle() {
		switch (levelState) {
		case 1: {
			BaseCastle[0] = new CastleLv1;
			BaseCastle[0]->setConnect();
		}
		case 2: {
			BaseCastle[1] = new CastleLv2;
		}
		case 3: {
			BaseCastle[2] = new CastleLv3;
		}
		case 4: {
			BaseCastle[3] = new EnemyCastle;
		}
		}
	}

};