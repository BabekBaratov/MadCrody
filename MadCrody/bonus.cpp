#include "bonus.h"

bonus::bonus(char skin): unit(skin)
{
}

void bonus::animation(int limit)
{
	if (get_x() == 19)
	{
		set_x(18);
	}

	set_x(get_x() + 1);
}
