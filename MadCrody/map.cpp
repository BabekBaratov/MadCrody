#include "map.h"

void map::map_generation()
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
		}
	}
}

void map::show_map()
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
	return this->field[20][44];
}
