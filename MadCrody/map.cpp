#include "map.h"

void map_game::map_generation()
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

			if (i == player_.get_x() - 1 && j == player_.get_y() - 1)
			{
				field[i][j] = player_skin;
			}
		}
	}
}

void map_game::show_map()
{
	for (int i = 0; i < vertical; i++)
	{
		for (int j = 0; j < horizontal; j++)						
		{
			std::cout << field[i][j];
		}
		std::cout << std::endl;
	}
}
void map_game::control()
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

void map_game::logic_control()
{
	switch (m_control)
	{
	case MyControl::LEFT:
	{
		std::cout << "A" << std::endl;
		std::cout << "Y--: " << player_.get_y() << std::endl;
		if (player_.get_y() > 2)
		{
			var_control = player_.get_y(); var_control--;
			player_.set_y(var_control);
			//m_control = MyControl::STOP;
		}
		break;
	}
	case MyControl::RIGHT:
	{
		std::cout << "D" << std::endl;
		std::cout << "Y++: " << player_.get_y() << std::endl;
		if (player_.get_y() < 43)
		{
			var_control = player_.get_y(); var_control++;
			player_.set_y(var_control);
			//m_control = MyControl::STOP;
		}
		break;
	}
	}
}

int map_game::get_vertical()
{
	return vertical;
}

int map_game::get_horizontal()
{
	return horizontal;
}

int map_game::get_field()
{
	return field[20][44];
}