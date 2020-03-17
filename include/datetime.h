
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
	//����������� � ����� ��������� ����������� (����, �����,���);
	DateTime(); 
	// ���������� ���� - ����������� ��� ���������� (������ ���������� ������� ����);
	DateTime(const DateTime&); 
	//����� - ����������� ����������� (������ ����� ������� �������);

	string getToday(); 
	//����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������ (�������� 07 november 2018, wedensday);
	string getYesterday(); 
	//����������� ���� ���������� ��� � ���� ������.
	string getTomorrow(); // ����������� ���� ����������� ��� � ���� ������.
	string getFuture(unsigned int N); //����������� ���� ����� N ���� � �������;
	string getPast(unsigned int N); //����������� ���� ����� N ���� � �������;
	int getDifference(DateTime&); //��� ������� ������� (� ����) ����� ����� ������
};

#endif