#include "control.h"

void control::add_unit(unit* u)
{
	units.push_back(u);
}

void control::fun_control()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case KEY_LEFT:
		case 'A':
		case 'a':
		{
			m_control = mycontrol::LEFT;
			break;
		}
		case KEY_RIGHT:
		case 'D':
		case 'd':
		{
			m_control = mycontrol::RIGHT;
			break;
		}
		}
	}
}

void control::logic()
{
	for_each(units.begin(), units.end(), [this](unit* u)
	{ 
		switch (m_control)
		{
		case mycontrol::LEFT:
		{
			if (u->get_y() > 2)
			{
				u->set_y(u->get_y() - 1);
				m_control = mycontrol::STOP;
			}
			break;
		}
		case mycontrol::RIGHT:
		{
			if (u->get_y() < 43)
			{
				u->set_y(u->get_y() + 1);
				m_control = mycontrol::STOP;
			}
			break;
		}
		}
	});
}
