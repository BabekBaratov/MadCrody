#include "auth_me.h"

auth_me::auth_me()
{
	usr_manager.load();
}

void auth_me::auth_menu()
{
	try
	{
		system("color F0");
		CYCLE_FOR
		cout << "\t\t\t   Добро пожаловать в игру" << endl;
		cout << "\t\t\t\t   MadCrody" << endl;
		cout << endl;
		cout << "\t\t\t\t Авторизация" << endl;
		cout << "\t\t\t\t Регистрация" << endl;
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
					enter_login();
					break;
				}
				case 1:
				{
					registration();
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
			auth_menu_animation();
		}
	}
	catch (char error_one)
	{
		cerr <<"\t\t\t   Error: " << error_one << endl;
	}
	catch (const char* error_two)
	{
		cerr << "\t\t\t   Error: " << error_two << endl;
	}
}

void auth_me::auth_menu_animation()
{
	switch (selected_index)
	{
	case 0:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t   Добро пожаловать в игру" << endl;
		cout << "\t\t\t\t   MadCrody" << endl;
		cout << endl;
		cout << "\t\t\t\t>Авторизация<" << endl;
		cout << "\t\t\t\t Регистрация" << endl;
		cout << "\t\t\t\t    Выйти" << endl;
		break;
	}
	case 1:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t   Добро пожаловать в игру" << endl;
		cout << "\t\t\t\t   MadCrody" << endl;
		cout << endl;
		cout << "\t\t\t\t Авторизация" << endl;
		cout << "\t\t\t\t>Регистрация<" << endl;
		cout << "\t\t\t\t    Выйти" << endl;
		break;
	}
	case 2:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t   Добро пожаловать в игру" << endl;
		cout << "\t\t\t\t   MadCrody" << endl;
		cout << endl;
		cout << "\t\t\t\t Авторизация" << endl;
		cout << "\t\t\t\t Регистрация" << endl;
		cout << "\t\t\t\t   >Выйти<" << endl;
		break;
	}
	}
}

void auth_me::enter_login()
{
	do
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\tВведите логин: ";
		cin >> login;

		if (usr_manager.login_exists(login))
		{
			enter_password();
		}
		else
		{
			system("cls");
			CYCLE_FOR
			cout << "\t\t\t\tНе верный логин!" << endl;
			Sleep(2000);
		}
	} while (true);
}

void auth_me::enter_password()
{
	do
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\tВведите пароль: ";
		cin >> password;

		if (usr_manager.valid(login, password))
		{
			system("cls");
			menu.menu();
		}
		else
		{
			system("cls");
			CYCLE_FOR
			cout << "\t\t\t\tНе верный пароль!" << endl;
			Sleep(2000);
		}
	} while (true);
}

void auth_me::registration()
{
	do
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\tВведите логин: ";
		cin >> login;

		CYCLE_FOR

		if (!usr_manager.login_exists(login))
		{

			system("cls");
			CYCLE_FOR
			cout << "\t\t\t\tВаш логин: " << login << endl;
			cout << endl;

			cout << "\t\t\t\tВведите пароль: ";
			cin >> password;

			usr_manager.add(user(login, password));
			usr_manager.save();

			system("cls");
			CYCLE_FOR
			cout << "\t\t\tОтлично! Аккаунт: " << login << " был успешно создан!" << endl;

			Sleep(2000);
			system("cls");
			auth_menu();
		}
		else
		{
			system("cls");
			CYCLE_FOR
			cout << "\t\t\t  Такой логин уже существует!" << endl;
			Sleep(2000);
		}
	} while (true);
}
