#pragma once
#include "game.h"
class main_menu : public game
{
private:
public:
	virtual void menu();//���� ����
	void animation_menu();//�������� ����
	virtual void settings();//��������� ����
	void animation_settings();//�������� ����
	virtual void profile();//���������� � �������
};

