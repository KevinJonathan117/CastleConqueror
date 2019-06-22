#pragma once
#include <SFML/Graphics.hpp>
#include "Util.h"
#include "Graphic.h"

class BaseCastle {
protected:
	int gauge;
	int money, food;
	int castleLevel;
	CastleLevelOne SpriteLv1;
	CastleLevelTwo SpriteLv2;
	CastleLevelThree SpriteLv3;
	CastleEnemy SpriteEnemy;

public:

	virtual void setGauge() {}
	virtual void setMoney() {}
	virtual void setFood() {}
	virtual void setConnect() {}
	virtual void drawCastle(sf::RenderWindow &window, float x, float y) {}
};

class CastleLv1 : public BaseCastle {
protected:

public:

	void setGauge(int _gauge) {
		gauge = _gauge;
	}

	void setMoney(int _money) {
		money += _money;
	}

	void setFood(int _food) {
		food += _food;
	}

	void drawCastle(sf::RenderWindow &window, float x, float y) {
		SpriteLv1.draw(window,x,y);
	}

};

class CastleLv2 : public BaseCastle{
protected:

public:
	void setGauge(int _gauge) {
		gauge = _gauge;
	}

	void setMoney(int _money) {
		money += _money;
	}

	void setFood(int _food) {
		food += _food;
	}

	void drawCastle(sf::RenderWindow &window, float x,  float y) {
		SpriteLv2.draw(window,x,y);
	}
};

class CastleLv3 : public BaseCastle{
protected:

public:
	void setGauge(int _gauge) {
		gauge = _gauge;
	}

	void setMoney(int _money) {
		money += _money;
	}

	void setFood(int _food) {
		food += _food;
	}

	void drawCastle(sf::RenderWindow &window, float x, float y) {
		SpriteLv3.draw(window, x, y);
	}
};

class EnemyCastle : public BaseCastle{
protected:

public:
	void setGauge(int _gauge) {
		gauge = _gauge;
	}

	void drawCastle(sf::RenderWindow &window, float x, float y) {
		SpriteEnemy.draw(window, x, y);
	}
};

class Player {
private:
	
public:

};
