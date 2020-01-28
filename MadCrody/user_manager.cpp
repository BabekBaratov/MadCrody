#include "user_manager.h"



user_manager::user_manager()
{
}


user_manager::~user_manager()
{
}


void user_manager::add(user usr)
{
	users.push_back(usr);
}


void user_manager::save()
{
	std::ofstream out;
	out.open(DB);
	if (!out.is_open()) throw "Ошибка открытия файла.";
	for_each(users.begin(), users.end(), [&out](user &u) {
		out << u.get_login() << std::endl << u.get_password() << std::endl;
	});

	out.close();
}


void user_manager::load()
{
	std::ifstream fin;
	std::string login;
	std::string password;
	
	fin.open(DB);
	if (!fin.is_open() || fin.fail()) throw "Ошибка открытия файла.";

	while (!fin.eof())
	{
		getline(fin, login);
		getline(fin, password);
		if (login != "") 
		{
			users.emplace_back(login, password);
		}
	}

	fin.close();
}


bool user_manager::login_exists(std::string &login)
{
	return any_of(users.begin(), users.end(), [&login](user& u) {return u.get_login() == login; });
}


bool user_manager::valid(std::string &login, std::string &password)
{	
	return any_of(users.begin(), users.end(), [&login, &password](user& u) {return u.get_login() == login && u.get_password() == password; });
}
