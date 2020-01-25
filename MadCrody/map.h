#pragma once
#include "unit.h"
#include <iostream>
#include <vector>
#include <algorithm>

class map
{
protected:
	const int vertical = 20;//Вертикаль карты
	const int horizontal = 44;//Горизонталь карты
	char field[20][44];//Поле карты
	char field_two[20][44];

	char wall_skin = '0';//Текстурка стены
	char empty_skin = ' ';//Текстурка пола
	std::vector<unit *> units;
public:
	void add_unit(unit* u);
	void map_generation();//Генерация карты
	void draw(unit* u);//Вывод карты
	int get_vertical();
	int get_horizontal();
};

