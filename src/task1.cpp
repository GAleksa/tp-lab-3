
#include "task1.h"

//������ ����� � ������
double calc_Earth_Rope() //= double calcDelta() - ������ ������ ����� ������ � ��������
{
	double Earth_radius = 6378.1, Earth_ference, circle_radius, circle_ference, gap;
	
	Circle Earth(Earth_radius);
	Circle circle(0);

	Earth_ference = Earth.getFerence();
	circle_ference = Earth_ference + 1; //��������� 1 � �������
	circle.setFerence(circle_ference);
	
	circle_radius = circle.getRadius();
	gap = circle_radius - Earth_radius;

	return gap; //�����
};

//������ �������
double calc_Pool() // = double calcCost() - ������ ��������� ��������
{
	int price_concrete = 1000, // ��������� 1 ����������� ����� ��������� ��������
		price_fence = 2000; // ��������� 1 ��������� ����� ������
	double radius = 3, // ������ ��������
		width = 1, // ������ �������� ������� ������ ��������
		length_fence,
		area_concrete,
		cost_concrete,
		cost_fence;

	Circle pool(radius);
	Circle way(radius+width)	; // �������

	length_fence = way.getFerence();
	cost_fence = length_fence * price_fence;

	area_concrete = way.getArea() - pool.getArea();
	cost_concrete = area_concrete * price_concrete;

	return (cost_concrete + cost_fence);
};