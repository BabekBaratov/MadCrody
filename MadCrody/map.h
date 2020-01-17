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
	const int vertical = 20;//��������� �����
	const int horizontal = 44;//����������� �����
	char field[20][44];//���� �����

	const char wall_skin = '0';//��������� �����
	const char empty_skin = ' ';//��������� ����

	char player_skin = 'P';//��������� ������
	char bots_skin = 'V';//��������� ����
	char bonus_skin = '$';//��������� �������
public:
	void map_generation();
	void show_map();
	int get_vertical();
	int get_horizontal();
	int get_field();
};

