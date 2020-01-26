#include "game.h"

void game::customization(int bot_num)
{
	player_obj = new player('P');
	bonus_obj = new bonus('$');

	for (int i = 0; i < bot_num; i++)
	{
		bot_arr.push_back(new bot('V'));
	}

	for (int i = 0; i < bot_arr.size(); i++)
	{
		map_obj.add_unit(bot_arr[i]);
	}

	map_obj.add_unit(player_obj);
	map_obj.add_unit(bonus_obj);
	control_obj.add_unit(player_obj);

	restart();
}

void game::restart()
{
	player_obj->set_position(map_obj.get_vertical(), map_obj.get_horizontal());
	bonus_obj->set_random_position_bonus(map_obj.get_horizontal());

	for (int i = 0; i < bot_arr.size(); i++)
	{
		bot_arr[i]->set_random_position_bot(map_obj.get_horizontal());
	}
}

void game::start()
{
	do
	{
		//Sleep(100);
		map_obj.map_generation();
		control_obj.fun_control();
		control_obj.logic();
		map_obj.draw(player_obj);
		bonus_obj->animation_bonus(map_obj.get_horizontal());

		for (int i = 0; i < bot_arr.size(); i++)
		{
			bot_arr[i]->animation_bot(map_obj.get_horizontal());
		}

		check();
	} while (true);
}

void game::game_over()
{
	system("cls");
	cout << "\t\t\t\tGame Over\n\t\t\t\tYour Score: " << player_obj->get_score()<< endl;

	player_obj->set_score(0);
	Sleep(3000);
	system("cls");
}

void game::check()
{
	for (int i = 0; i < bot_arr.size(); i++)
	{
		if (player_obj->get_x() == bot_arr[i]->get_x())
		{
			if (player_obj->get_y() == bot_arr[i]->get_y())
			{
				game_over();
			}
		}
	}

	if (player_obj->get_y() == bonus_obj->get_y())
	{
		if (player_obj->get_x() == bonus_obj->get_x())
		{
			var_score++;
			player_obj->set_score(var_score);
			bonus_obj->set_random_position_bonus(map_obj.get_horizontal());
			bonus_obj->set_increment(0);
		}
	}
}

game::~game()
{
	delete player_obj;
	delete bonus_obj;
}