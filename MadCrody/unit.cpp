#include "unit.h"

unit::unit(char skin) : x(0), y(0), skin(skin), score(0)
{
}

unit::unit(int x, int y, char skin, int score) : x(x), y(y), skin(skin), score(score)
{
}

void unit::set_random_position(int limit)
{
	x = rand() % 2 + 1;
	y = rand() % (limit - 2) + 2;
}

int unit::get_x()
{
	return x;
}

int unit::get_y()
{
	return y;
}

int unit::get_score()
{
	return score;
}

char unit::get_skin()
{
	return skin;
}

void unit::set_x(int x)
{
	this->x = x;
}

void unit::set_y(int y)
{
	this->y = y;
}

void unit::set_score(int score)
{
	this->score = score;
}

void unit::set_skin(char skin)
{
	this->skin = skin;
}