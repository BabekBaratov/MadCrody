#include "game.h"

void game::set_spawn_position_player(unit& acc)
{
	acc.set_spawn_position_player();
}

void game::start()
{
	set_spawn_position_player(player);



	do
	{
		maping.map_generation();
		maping.control();
		maping.logic_control();
		maping.show_map();
	} while (true);
}

void game::game_over()
{
	cout << "Game Over" << endl;

	system("pause");
}
