#pragma once
#include <string>
class user
{
public:
	user(std::string login, std::string password);
	virtual ~user();
private:
	std::string login;//�����
	std::string password;//������
public:
	std::string get_login();
	std::string get_password();
};

