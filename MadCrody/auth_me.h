#pragma once
#include "main_menu.h"
#include "game.h"
class auth_me
{
private:
	main_menu menu;//����� ����
	user_manager usr_manager;//�������� �������������
	int selected_index = 0;//���������� �������� �������

	string login;//����� ������������
	string password;//������ ������������

	void auth_menu_animation();//�������� ����
	void enter_login();//���� ������
	void enter_password();//���� ������
	void registration();//�����������
public:
	auth_me();
	void auth_menu();//����
};

