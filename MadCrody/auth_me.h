#pragma once
#include "main_menu.h"
#include "game.h"
class auth_me : public game
{
private:
	bool user_found;
	string valid_login;
	string valid_pass;

	string login;//Логин пользователя
	string password;//Пароль пользователя

	string login_reg;
	string password_reg;

	main_menu menu;

	void auth_menu_animation();
	void authorization_login();
	void authorization_password(string valid_login, string valid_password);
	void registration();
public:
	void auth_menu();
};

