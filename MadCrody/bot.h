#pragma once
#include "unit.h"
class bot : public unit
{
private:
public:
	bot(char skin);
	void set_random_position_bot(int limit);//��������� ���� ����
	void animation_bot(int limit);//�������� ����
};

