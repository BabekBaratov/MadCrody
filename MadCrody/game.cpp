#include "game.h"

void game::start()
{
	do
	{
		map.map_generation();
		map.show_map();
	} while (true);
}

void game::game_over()
{
	cout << "Game Over" << endl;

	system("pause");
}
