#pragma once
using namespace std;
#include "map.h"
#include <ctime>
#include <Windows.h>
#include <conio.h>
class game
{
protected:
	map map;
public:
	void start();
	virtual void game_over();
};