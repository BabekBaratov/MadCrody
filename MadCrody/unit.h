#pragma once
#include<iostream>
#include <conio.h>

class unit
{
protected:
	int x;
	int y;
	int score;
public:
	unit();
	unit(int x, int y);
	int get_x();
	int get_y();
	int get_score();
	void set_x(int x);
	void set_y(int y);
	void set_score(int score);
};

