#pragma once
#define KEY_LEFT 75
#define KEY_RIGHT 77
#include "player.h"
#include "map.h"

enum class mycontrol
{
	LEFT = 1,
	RIGHT,
	UP,
	DOWN,
	STOP
};

class control : public map
{
private:
	int var_control;
	mycontrol m_control;
public:
	void add_unit(unit* u);
	void fun_control();
	void logic();
};

