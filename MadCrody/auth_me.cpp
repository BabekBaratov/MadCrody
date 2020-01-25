#include "auth_me.h"

void auth_me::auth_menu()
{
	try
	{
		system("color F0");
		CYCLE_FOR
		cout << "\t\t\t   ����� ���������� � ����" << endl;
		cout << "\t\t\t\t   MadCrody" << endl;
		cout << endl;
		cout << "\t\t\t\t �����������" << endl;
		cout << "\t\t\t\t �����������" << endl;
		cout << "\t\t\t\t    �����" << endl;

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
		cout << "\t\t\t   ����� ���������� � ����" << endl;
		cout << "\t\t\t\t   MadCrody" << endl;
		cout << endl;
		cout << "\t\t\t\t>�����������<" << endl;
		cout << "\t\t\t\t �����������" << endl;
		cout << "\t\t\t\t    �����" << endl;
		break;
	}
	case 1:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t   ����� ���������� � ����" << endl;
		cout << "\t\t\t\t   MadCrody" << endl;
		cout << endl;
		cout << "\t\t\t\t �����������" << endl;
		cout << "\t\t\t\t>�����������<" << endl;
		cout << "\t\t\t\t    �����" << endl;
		break;
	}
	case 2:
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t   ����� ���������� � ����" << endl;
		cout << "\t\t\t\t   MadCrody" << endl;
		cout << endl;
		cout << "\t\t\t\t �����������" << endl;
		cout << "\t\t\t\t �����������" << endl;
		cout << "\t\t\t\t   >�����<" << endl;
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
		cout << "\t\t\t\t������� �����: ";
		cin >> login;


		fin.open(database);
		if (!fin.is_open()) throw "������ �������� �����.";

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
			cout << "\t\t\t\t�� ������ �����!" << endl;
			Sleep(3000);
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
		cout << "\t\t\t\t������� ������: ";
		cin >> password;

		if (valid_password == password)
		{
			strcpy(const_cast<char*>(login.c_str()), valid_login.c_str());
			strcpy(const_cast<char*>(password.c_str()), valid_password.c_str());
			system("cls");
			fin.close();
			menu.menu();
		}
		else
		{
			system("cls");
			CYCLE_FOR
			cout << "\t\t\t\t�� ������ ������!" << endl;
			Sleep(3000);
			fin.close();
		}
	} while (true);
}

void auth_me::registration()
{
	do
	{
		system("cls");
		CYCLE_FOR
		cout << "\t\t\t\t������� �����: ";
		cin >> login_reg;

		fout.open(database, ofstream::app);
		if (!fout.is_open()) throw "������ �������� �����.";

		fin.open(database);
		if (!fin.is_open()) throw "������ �������� �����.";
		CYCLE_FOR

		user_found = false;

		while (true)
		{
			if (getline(fin, valid_login))
			{
				if (valid_login == login_reg)
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

		if ((user_found) == 0)
		{
			fout << login_reg << endl;

			system("cls");
			CYCLE_FOR
			cout << "\t\t\t\t��� �����: " << login_reg << endl;
			cout << endl;

			cout << "\t\t\t\t������� ������: ";
			cin >> password_reg;
			fout << password_reg << endl;
			fin.close();
			fout.close();

			system("cls");
			CYCLE_FOR
			cout << "\t\t\t   �������! �������: " << login_reg << " ��� ������� ������!" << endl;

			Sleep(3000);
			system("cls");
			auth_menu();
		}
		else
		{
			system("cls");
			CYCLE_FOR
			cout << "\t\t\t\t����� ����� ��� ����������!" << endl;
			Sleep(3000);
			fin.close();
			fout.close();
		}
	} while (true);
}
