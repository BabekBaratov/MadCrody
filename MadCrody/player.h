#pragma once
#include "unit.h"
class player : public unit
{
public:
	player(char skin);
	void set_position(int vertical, int hozirontal);//Задает позицию игрока
};

