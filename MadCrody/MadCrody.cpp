// MadCrody.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include"game.h"

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");

	game game;
	game.start();


	system("pause");
	return 0;
}
