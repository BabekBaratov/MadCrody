#include "map.h"

void map::map_generation()
{
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
		}
	}
	std::for_each(units.begin(), units.end(), [this](unit* u){field[u->get_x() - 1][u->get_y() - 1] = u->get_skin();});
}

void map::add_unit(unit * u)
{
	units.push_back(u);
}

void map::draw(unit* u)
{
	system("cls");
	std::cout << std::endl;
	std::cout << "\t\t\t\t    Score: " << u->get_score() << std::endl;
	for (int i = 0; i < vertical; i++)
	{
		std::cout << "\t\t  ";
		for (int j = 0; j < horizontal; j++)
		{
			std::cout << field[i][j];
		}
		std::cout << std::endl;
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
