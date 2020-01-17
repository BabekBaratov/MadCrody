#pragma once
#include<iostream>
enum class MyControl
{
LEFT = 1,
RIGHT,
UP,
DOWN,
STOP
};

class map
{
private:
	const int vertical = 20;//Вертикаль карты
	const int horizontal = 44;//Горизонталь карты
	char field[20][44];//Поле карты

	const char wall_skin = '0';//Текстурка стены
	const char empty_skin = ' ';//Текстурка пола

	char player_skin = 'P';//Текстурка игрока
	char bots_skin = 'V';//Текстурка бота
	char bonus_skin = '$';//Текстурка монетки
public:
	void map_generation();
	void show_map();
	int get_vertical();
	int get_horizontal();
	int get_field();
};

