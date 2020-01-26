#pragma once
#include "game.h"
class main_menu : public game
{
private:
public:
	virtual void menu();//Меню игры
	void animation_menu();//Анимация меню
	virtual void complexity();//Сложность игры
	void animation_complexity();//Анимация меню сложности
};

