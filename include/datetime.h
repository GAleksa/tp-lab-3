
#ifndef DATETIME_H
#define DATETIME_H

#include <ctime>
#include <string>

using namespace std;

class DateTime
{
private:
	tm date;
public:
	DateTime(int date, int month, int year); 
	//конструктор с тремя числовыми параметрами (день, месяц,год);
	DateTime(); 
	// актуальная дата - конструктор без параметров (объект использует текущую дату);
	DateTime(const DateTime&); 
	//копия - конструктор копирования (создаём копию другого объекта);

	string getToday(); 
	//возвращение текущей даты в виде строки, с указанием дня недели и названия месяца (например 07 november 2018, wedensday);
	string getYesterday(); 
	//возвращение даты вчерашнего дня в виде строки.
	string getTomorrow(); // возвращение даты завтрашнего дня в виде строки.
	string getFuture(unsigned int N); //возвращение даты через N дней в будущем;
	string getPast(unsigned int N); //возвращение даты через N дней в прошлом;
	int getDifference(DateTime&); //для расчёта разницы (в днях) между двумя датами
};

#endif