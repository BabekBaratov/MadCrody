#pragma once
#include "main_menu.h"
#include "game.h"
class auth_me
{
private:
	main_menu menu;//Вызов меню
	user_manager usr_manager;//Менеджер пользователей
	int selected_index = 0;//Возвращает выбраный элемент

	string login;//Логин пользователя
	string password;//Пароль пользователя

	void auth_menu_animation();//Анимация меню
	void enter_login();//Ввод логина
	void enter_password();//Ввод пароля
	void registration();//Регистрация
public:
	auth_me();
	void auth_menu();//Меню
};

