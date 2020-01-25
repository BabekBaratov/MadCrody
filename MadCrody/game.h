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
	map map_obj;//Обьект карты
	player* player_obj;//Обькт для игрока
	bonus* bonus_obj;//Обьект для бонуса

	vector<bot*> bot_arr;//Массив ботов

	control control_obj;//Перечисление (управление) 
	mycontrol m_control;

	int var_score = 0;//Передача счёта
	int selected_index = 0;//Возвращает выбраный элемент

	string database = "account.txt";//Название файла (логин - пароль)

	ofstream fout;//Запись данных в файл
	ifstream fin;//Открытие файла
public:
	game();
	game(const game&) = delete;
	game& operator=(const game&) = delete;

	virtual void creates_bot(int bot_num);//Создание ботов
	virtual void start();//Старт игры
	virtual void restart();//Спавн всех unit
	virtual void game_over();//Конец игры
	virtual void check();//Проверки
	virtual ~game();
};