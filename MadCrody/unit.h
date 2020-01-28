#pragma once
#include<iostream>
#include <conio.h>

class unit
{
protected:
	int x;
	int y;
	int score;//Счет игрока
	char skin;//Скины
public:
	unit(char skin);
	unit(int x, int y, char skin, int score);

	void set_random_position(int limit);//Рандомная позиция 

	int get_x();
	int get_y();
	int get_score();
	char get_skin();

	void set_x(int x);
	void set_y(int y);
	void set_score(int score);
	void set_skin(char skin);
};

