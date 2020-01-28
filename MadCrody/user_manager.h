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
	void add(user usr);//���������� ������
	void save();//���������� ������
	void load();//�������� ������
	bool login_exists(std::string &login);//�������� �� ������������ �����
	bool valid(std::string &login, std::string &pass);//�������� �� ������������ ����� � �� ������ ������
};

