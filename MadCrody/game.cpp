#include "game.h"

void game::start()
{
	player.set_position(maping.get_horizontal(), maping.get_vertical());



	bots.set_random_position(maping.get_vertical());
	tmp_bot_get_x = bots.get_x();
	tmp_bot_get_y = bots.get_y();

	//Sleep(5000);
	do
	{
		maping.map_generation(tmp_bot_get_x, tmp_bot_get_y);
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
