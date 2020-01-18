#pragma once
using namespace std;
#include "map.h"
#include "player.h"
#include "unit.h"
#include <ctime>
#include <Windows.h>
#include <conio.h>
class game
{
protected:
	map maping;
	unit units;
	player player;
public:
	void set_spawn_position_player(unit& acc);
	void start();
	virtual void game_over();
};