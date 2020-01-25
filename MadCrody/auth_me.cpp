#include "auth_me.h"

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
					authorization_login();
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
	catch (char error)
	{
		cerr <<"Error: " << error << endl;
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

void auth_me::authorization_login()
{
	do
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\tВведите логин: ";
		cin >> login;


		fin.open(database);
		if (!fin.is_open()) throw "Ошибка открытия файла.";
		CYCLE_FOR

		user_found = false;

		while (true) 
		{
			if (getline(fin, valid_login))
			{
				if (valid_login == login)
				{
					getline(fin, valid_pass);
					user_found = true;
				}
			}
			else
			{
				break;
			}
		}

		if (user_found)
		{
			authorization_password(valid_login, valid_pass);
		}
		else
		{
			system("cls");
			CYCLE_FOR
			cout << "\t\t\t\tНе верный логин!" << endl;
			Sleep(1000);
			fin.close();
		}
	} while (true);
}

void auth_me::authorization_password(string valid_login, string valid_password)
{
	do
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\tВведите пароль: ";
		cin >> password;

		if (valid_password == password)
		{
			strcpy(const_cast<char*>(login.c_str()), valid_login.c_str());
			strcpy(const_cast<char*>(password.c_str()), valid_password.c_str());
			system("cls");
			menu.menu();
		}
		else
		{
			system("cls");
			CYCLE_FOR
			cout << "\t\t\t\tНе верный логин!" << endl;
			Sleep(1000);
			fin.close();
		}
	} while (true);
}

void auth_me::registration()
{
	system("cls");
	fout.open(database, ofstream::app);

	if (!fout.is_open()) throw "Ошибка открытия файла.";
	CYCLE_FOR

	cout << "\t\t\t\tВведите логин: ";
	cin >> login_reg;
	fout << login_reg << endl;

	system("cls");
	CYCLE_FOR
	cout << "\t\t\t\tВаш логин: " << login_reg << endl;
	cout << endl;

	cout << "\t\t\t\tВведите пароль: ";
	cin >> password_reg;
	fout << password_reg << endl;

	fout.close();
	system("cls");
	auth_menu();
}
