#include "unit.h"

unit::unit() : x(0), y(0)
{
}

unit::unit(int x, int y)
{
	this->x = x;
	this->y = y;
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
