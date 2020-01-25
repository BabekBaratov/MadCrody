#include "main_menu.h"

void main_menu::menu()
{
	system("color F0");
	CYCLE_FOR
	cout << "\t\t\t\t Начать игру" << endl;
	cout << "\t\t\t\t  Настройки" << endl;
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
				start();
				break;
			}
			case 1:
			{
				settings();
				break;
			}
			case 2:
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
		cout << "\t\t\t\t  Настройки" << endl;
		cout << "\t\t\t\t    Выйти" << endl;
		break;
	}
	case 1:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\t Начать игру" << endl;
		cout << "\t\t\t\t >Настройки<" << endl;
		cout << "\t\t\t\t    Выйти" << endl;
		break;
	}
	case 2:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\t Начать игру" << endl;
		cout << "\t\t\t\t  Настройки" << endl;
		cout << "\t\t\t\t   >Выйти<" << endl;
		break;
	}
	}
}

void main_menu::settings()
{
	system("cls");
	CYCLE_FOR
	cout << "\t\t\t\t   Профиль" << endl;
	cout << "\t\t\t\t  Сложность" << endl;
	cout << "\t\t\t\t    Назад" << endl;

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
				profile();
				break;
			}
			case 1:
			{
				
				break;
			}
			case 2:
			{
				system("cls");
				menu();
				break;
			}
			default:
				break;
			}
			break;
		}
		}
		animation_settings();
	}
	
}

void main_menu::animation_settings()
{
	switch (selected_index)
	{
	case 0:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\t  >Профиль<" << endl;
		cout << "\t\t\t\t  Сложность" << endl;
		cout << "\t\t\t\t    Назад" << endl;
		break;
	}
	case 1:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\t   Профиль" << endl;
		cout << "\t\t\t\t >Сложность<" << endl;
		cout << "\t\t\t\t    Назад" << endl;
		break;
	}
	case 2:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\t   Профиль" << endl;
		cout << "\t\t\t\t  Сложность" << endl;
		cout << "\t\t\t\t   >Назад<" << endl;
		break;
	}
	}
}

void main_menu::profile()
{
	system("cls");
	CYCLE_FOR
	cout << "\t\t\t\tВаш логин: " << endl;

	system("pause");
}
