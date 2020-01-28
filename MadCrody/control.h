#pragma once
#define KEY_LEFT 75
#define KEY_RIGHT 77
#include "unit.h"
#include <vector>
#include <algorithm>

enum class mycontrol
{
	LEFT = 1,
	RIGHT,
	UP,
	DOWN,
	STOP
};

class control
{
private:
	mycontrol m_control;
	std::vector<unit*> units;//Массив юнитов
public:
	void add_unit(unit* u);//Передача юнитов
	void fun_control();//Управление
	void logic();//Логика управления
};

