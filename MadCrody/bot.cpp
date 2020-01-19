#include "bot.h"

void bot::set_random_position(int limit)
{
	set_x(2);
	set_y(rand() % (limit - 2) + 2);
}
