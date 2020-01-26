#include "main_menu.h"

void main_menu::menu()
{
	system("color F0");
	CYCLE_FOR
	cout << "\t\t\t\t Начать игру" << endl;
	cout << "\t\t\t\t    Выйти" << endl;

	while (true)
	{
		switch (_getch())
		{
		case KEY_UP:
		case 'W':
		case 'w':
		{
			if (selected_index > 0)
			{
				selected_index--;
			}
			break;
		}
		case KEY_DOWN:
		case 'S':
		case 's':
		{
			if (selected_index < 1)
			{
				selected_index++;
			}
			break;
		}
		case KEY_ENTER:
		{
			switch (selected_index)
			{
			case 0:
			{
				complexity();
				break;
			}
			case 1:
			{
				exit(0);
				break;
			}
			default:
				break;
			}
			break;
		}
		}
		animation_menu();
	}
}

void main_menu::animation_menu()
{
	switch (selected_index)
	{
	case 0:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\t>Начать игру<" << endl;
		cout << "\t\t\t\t    Выйти" << endl;
		break;
	}
	case 1:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\t Начать игру" << endl;
		cout << "\t\t\t\t   >Выйти<" << endl;
		break;
	}
	}
}

void main_menu::complexity()
{
	system("cls");
	CYCLE_FOR
	cout << "\t  Что бы начать играть, нужно выбрать уровень сложности" << endl;
	cout << "\t\t\t\t Новичек" << endl;
	cout << "\t\t\t\t Обычный" << endl;
	cout << "\t\t\t\t Тяжелый" << endl;

	while (true)
	{
		switch (_getch())
		{
		case KEY_UP:
		case 'W':
		case 'w':
		{
			if (selected_index > 0)
			{
				selected_index--;
			}
			break;
		}
		case KEY_DOWN:
		case 'S':
		case 's':
		{
			if (selected_index < 2)
			{
				selected_index++;
			}
			break;
		}
		case KEY_ENTER:
		{
			switch (selected_index)
			{
			case 0:
			{
				customization(4);
				start();
				break;
			}
			case 1:
			{
				customization(7);
				start();
				break;
			}
			case 2:
			{
				customization(10);
				start();
				break;
			}
			default:
				break;
			}
			break;
		}
		}
		animation_complexity();
	}
}

void main_menu::animation_complexity()
{
	switch (selected_index)
	{
	case 0:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t  Что бы начать играть, нужно выбрать уровень сложности" << endl;
		cout << "\t\t\t\t>Новичек<" << endl;
		cout << "\t\t\t\t Обычный" << endl;
		cout << "\t\t\t\t Тяжелый" << endl;
		break;
	}
	case 1:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t  Что бы начать играть, нужно выбрать уровень сложности" << endl;
		cout << "\t\t\t\t Новичек" << endl;
		cout << "\t\t\t\t>Обычный<" << endl;
		cout << "\t\t\t\t Тяжелый" << endl;
		break;
	}
	case 2:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t  Что бы начать играть, нужно выбрать уровень сложности" << endl;
		cout << "\t\t\t\t Новичек" << endl;
		cout << "\t\t\t\t Обычный" << endl;
		cout << "\t\t\t\t>Тяжелый<" << endl;
		break;
	}
	}
}
