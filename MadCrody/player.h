#pragma once
#include "unit.h"
class player : public unit
{
public:
	int var_control = 0;
	void set_spawn_position_player() override;
};

