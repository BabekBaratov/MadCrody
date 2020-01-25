#pragma once
#include "unit.h"
class bonus : public unit
{
private:

public:
	bonus(char skin);
	void set_random_position_bonus(int limit);
	void animation_bonus(int limit);
};

