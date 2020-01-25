#pragma once
#include "game.h"
class main_menu : public game
{
private:
public:
	virtual void menu();//Меню игры
	void animation_menu();//Анимация меню
	virtual void settings();//Настройки игры
	void animation_settings();//Анимация меню
	virtual void profile();//Информация о профиле
};

