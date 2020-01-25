#include "player.h"

player::player(char skin): unit('P')
{}

void player::set_position(int vertical, int horizontal)
{
	x = vertical - 1;
	y = horizontal / 2;
}
 