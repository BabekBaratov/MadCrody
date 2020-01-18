#include "unit.h"

unit::unit()
{
	x = 19;
	y = 22;
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

void unit::set_x(int x)
{
	this->x = x;
}

void unit::set_y(int y)
{
	this->y = y;
}

void unit::set_spawn_position_player()
{
	std::cout << "Unit" << std::endl;
}
