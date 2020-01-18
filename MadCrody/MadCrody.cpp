// MadCrody.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include"game.h"

int main()
{
	setlocale(LC_ALL, "rus");
	game game;
	game.start();
	system("pause");
	return 0;
}
