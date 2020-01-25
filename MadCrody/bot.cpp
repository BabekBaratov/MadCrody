#include "bot.h"

bot::bot(char skin): unit(skin)
{
}

void bot::set_random_position_bot(int limit)
{
	set_x(2);
	set_y(rand() % (limit - 2) + 2);
}

void bot::animation_bot(int limit)
{
	if (get_x() == 19)
	{
		increment = rand() % 2 + 1;
		set_random_position_bot(limit);
	}

	increment++;
	set_x(increment);
}
