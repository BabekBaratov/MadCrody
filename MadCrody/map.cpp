#include "map.h"

void map::map_generation(int tmp_bot_get_x, int tmp_bot_get_y)
{
	system("cls");
	for (int i = 0; i < vertical; i++)
	{
		for (int j = 0; j < horizontal; j++)
		{
			if (i == 0 || j == 0 || i == vertical - 1 || j == horizontal - 1)
			{
				field[i][j] = wall_skin;
			}
			else
			{
				field[i][j] = empty_skin;
			}

			if (i == player.get_x() - 1 && j == player.get_y() - 1)
			{
				field[i][j] = player_skin;
			}

			if (i == tmp_bot_get_x - 1 && j == tmp_bot_get_y - 1)
			{
				field[i][j] = bots_skin;
			}
		}
	}
}

void map::show_map()
{
	std::cout << "Y: " << bots.get_y() << " X: " << bots.get_x() << std::endl;
	std::cout << "Y: " << player.get_y() << " X: " << player.get_x() << std::endl;
	for (int i = 0; i < vertical; i++)
	{
		for (int j = 0; j < horizontal; j++)
		{
			std::cout << field[i][j];
		}
		std::cout << std::endl;
	}
}

void map::control()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'A':
		{
			m_control = MyControl::LEFT;
			break;
		}
		case 'a':
		{
			m_control = MyControl::LEFT;
			break;
		}
		case 'D':
		{
			m_control = MyControl::RIGHT;
			break;
		}
		case 'd':
		{
			m_control = MyControl::RIGHT;
			break;
		}
		}
	}
}

void map::logic_control()
{
	switch (m_control)
	{
	case MyControl::LEFT:
	{
		std::cout << "A" << std::endl;
		std::cout << "Y--: " << player.get_y() << std::endl;
		if (player.get_y() > 2)
		{
			var_control = player.get_y(); var_control--;
			player.set_y(var_control);
			//m_control = MyControl::STOP;
		}
		break;
	}
	case MyControl::RIGHT:
	{
		std::cout << "D" << std::endl;
		std::cout << "Y++: " << player.get_y() << std::endl;
		if (player.get_y() < 43)
		{
			var_control = player.get_y(); var_control++;
			player.set_y(var_control);
			//m_control = MyControl::STOP;
		}
		break;
	}
	}
}

int map::get_vertical()
{
	return vertical;
}

int map::get_horizontal()
{
	return horizontal;
}

int map::get_field()
{
	return field[20][44];
}