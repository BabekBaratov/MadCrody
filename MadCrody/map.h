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

class map
{
private:
	MyControl m_control;
	player player;
	int var_control = 0;

	int vertical = 20;//��������� �����
	int horizontal = 44;//����������� �����
	char field[20][44];//���� �����

	char wall_skin = '0';//��������� �����
	char empty_skin = ' ';//��������� ����

	char player_skin = 'P';//��������� ������
	char bots_skin = 'V';//��������� ����
	char bonus_skin = '$';//��������� �������
public:
	void map_generation();
	void show_map();
	void control();
	void logic_control();
	int get_vertical();
	int get_horizontal();
	int get_field();
};

