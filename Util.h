#pragma once
#include<iostream>
#include<math.h>
#include <SFML/Graphics.hpp>

class Vector2D {
protected:
	float x, y;
	float length;
public:
	Vector2D(float _x = 0, float _y = 0)
	{
		x = _x;
		y = _y;
		length = pow(pow(x, 2) + pow(y, 2), 0.5);
	}
	float magnitude()
	{
		return length;
	}
	Vector2D normalize()
	{
		Vector2D newVector;
		newVector.x = x / length;
		newVector.y = y / length;
		return newVector;
	}
	friend void swap(Vector2D& a, Vector2D& b)
	{
		std::swap(a.x, b.x);
		std::swap(a.y, b.y);
	}
	Vector2D operator= (Vector2D other)
	{
		swap(*this, other);
		return *this;
	}
	//dot
	float operator*(Vector2D other)
	{
		return x * other.x + y * other.y;
	}
	Vector2D operator+(Vector2D other)
	{
		return Vector2D(x + other.x, y + other.y);
	}
	Vector2D operator-(Vector2D other)
	{
		return Vector2D(x - other.x, y - other.y);
	}
	void setPosition(float _x, float _y) {
		x = _x; y = _y;
	}
	float getX() {
		return x;
	}
	float getY() {
		return y;
	}
};