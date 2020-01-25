#include "bonus.h"

bonus::bonus(char skin): unit(skin)
{
}

void bonus::set_random_position_bonus(int limit)
{
	set_x(2);
	set_y(rand() % (limit - 2) + 2);
}

void bonus::animation_bonus(int limit)
{
	if (increment == 19)
	{
		increment = 18;
		//set_random_position_bonus(44);
	}
	increment++;
	set_x(increment);
}
