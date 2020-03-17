
#include "datetime.h"
#include <iostream>

int main() //он должен вернуть значение
{
	system("chcp 1251");
	DateTime d1(17, 03, 2020);
	string s = d1.getToday();
	cout << "Today: " << s << endl;
	s = d1.getFuture(10);
	cout << "10 days after:" << s << endl;
	s = d1.getPast(10);
	cout << "10 days before:" << s << endl;
	s = d1.getTomorrow();
	cout << "Tomorrow: " << s << endl;
	s = d1.getYesterday();
	cout << "Yesterday: " << s << endl;

	DateTime d2(07, 05, 2020);
	cout << "Difference = " << d1.getDifference(d2) << endl;
	return 0;
}