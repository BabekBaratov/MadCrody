#pragma once
#include<iostream>
#include <conio.h>

class unit
{
private:
	int x;
	int y;
public:
	unit();
	unit(int x, int y);
	int get_x();
	int get_y();
	void set_x(int x);
	void set_y(int y);
	virtual void set_spawn_position_player();
};

