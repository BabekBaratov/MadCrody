#pragma once
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include "user.h"

class user_manager
{
public:
	user_manager();
	virtual ~user_manager();
private:
	std::vector<user> users;
	const char* DB = "users.txt";
public:
	void add(user usr);//Добавление данных
	void save();//Сохранение данных
	void load();//Загрузка данных
	bool login_exists(std::string &login);//Проверка на существующий логин
	bool valid(std::string &login, std::string &pass);//Проверка на существующий логин и на верный пароль
};

