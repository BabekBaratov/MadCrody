#pragma once
#include "game.h"
class main_menu
{
private:
	int selected_index;//���������� �������� �������
	game game;
public:
	virtual void menu();//���� ����
	void animation_menu();//�������� ����
	virtual void complexity();//��������� ����
	void animation_complexity();//�������� ���� ���������
};

