#pragma once
#include "unit.h"
#include <iostream>
#include <vector>
#include <algorithm>

class map
{
protected:
	const int vertical = 20;//��������� �����
	const int horizontal = 44;//����������� �����
	char field[20][44];//���� �����

	char wall_skin = '0';//��������� �����
	char empty_skin = ' ';//��������� ����
	std::vector<unit *> units;//������ ������
public:
	void add_unit(unit* u);//��������� ������ � �����
	void map_generation();//��������� �����
	void draw(unit* u);//����� �����
	int get_vertical();
	int get_horizontal();
};

