#pragma once
using namespace std;
#include "map.h"
#include "player.h"
#include "bot.h"
#include "unit.h"
#include <ctime>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <array>
#include <algorithm>
class game
{
protected:
	map maping;
	unit units;
	player player;
	bot bots;
	array<bot, 3> bot_arr;
	int tmp_bot_get_x;
	int tmp_bot_get_y;
public:
	void start();
	virtual void game_over();
};