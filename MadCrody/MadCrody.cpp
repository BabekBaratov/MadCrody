// MadCrody.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include"auth_me.h"

int main()
{
	srand(time_t(0));
	setlocale(LC_ALL, "rus");

	auth_me auth;
	auth.auth_menu();

	system("pause");
	return 0;
}
