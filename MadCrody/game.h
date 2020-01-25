#pragma once
#pragma warning(disable: 4996)
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13
#define CYCLE_FOR for (int i = 0; i < 11; i++) {cout << endl;}
using namespace std;
#include "map.h"
#include "player.h"
#include "bot.h"
#include "bonus.h"
#include "unit.h"
#include "control.h"
#include <ctime>
#include <time.h>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <conio.h>

class game
{
protected:
	map map_obj;//������ �����
	player* player_obj;//����� ��� ������
	bonus* bonus_obj;//������ ��� ������

	vector<bot*> bot_arr;//������ �����

	control control_obj;//������������ (����������) 
	mycontrol m_control;

	int var_score = 0;//�������� �����
	int selected_index = 0;//���������� �������� �������

	string database = "account.txt";//�������� ����� (����� - ������)

	ofstream fout;//������ ������ � ����
	ifstream fin;//�������� �����
public:
	game();
	game(const game&) = delete;
	game& operator=(const game&) = delete;

	virtual void creates_bot(int bot_num);//�������� �����
	virtual void start();//����� ����
	virtual void restart();//����� ���� unit
	virtual void game_over();//����� ����
	virtual void check();//��������
	virtual ~game();
};