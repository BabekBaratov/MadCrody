#pragma once
#include "player.h"
#include<iostream>
enum class MyControl
{
	LEFT = 1,
	RIGHT,
	UP,
	DOWN,
	STOP
};

class map_game
{
private:
	MyControl m_control;
	player player_;
	int var_control = 0;

	int vertical = 20;//Вертикаль карты
	int horizontal = 44;//Горизонталь карты
	char field[20][44];//Поле карты

	char wall_skin = '0';//Текстурка стены
	char empty_skin = ' ';//Текстурка пола

	char player_skin = 'P';//Текстурка игрока
	char bots_skin = 'V';//Текстурка бота
	char bonus_skin = '$';//Текстурка монетки
public:
	virtual void map_generation();
	virtual void show_map();
	void control();
	void logic_control();
	int get_vertical();
	int get_horizontal();
	int get_field();
};

