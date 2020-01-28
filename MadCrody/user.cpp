#include "user.h"



user::user(std::string login, std::string password): login(login), password(password)
{
}


user::~user()
{
}


std::string user::get_login()
{	
	return login;
}


std::string user::get_password()
{	
	return password;
}
