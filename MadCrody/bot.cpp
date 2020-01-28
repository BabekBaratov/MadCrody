#include "bot.h"

bot::bot(char skin): unit(skin)
{
}

void bot::animation(int limit)
{
	if (get_x() == 19)
	{
		set_random_position(limit);
	}

	set_x(get_x() + 1);
}
