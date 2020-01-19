// MadCrody.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include"game.h"

class test
{
protected:
	int x;
	int y;
public:
	void show()
	{
		cout << x << endl;
		cout << y << endl;
	}
	int get_x() { return x; }
	int get_y() { return y; }
	void set_x(int x) { this->x = x; }
	void set_y(int y) { this->y = y; }
};

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");

	game game;
	game.start();


	/*test ts;
	ts.set_x(50);
	ts.set_y(100);

	ts.show();*/


	system("pause");
	return 0;
}
