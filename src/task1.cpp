
#include "task1.h"

//Задача Земля и Верёвка
double calc_Earth_Rope() //= double calcDelta() - расчет зазора между землей и веревкой
{
	double Earth_radius = 6378.1, Earth_ference, circle_radius, circle_ference, gap;
	
	Circle Earth(Earth_radius);
	Circle circle(0);

	Earth_ference = Earth.getFerence();
	circle_ference = Earth_ference + 1; //добавляют 1 м веревки
	circle.setFerence(circle_ference);
	
	circle_radius = circle.getRadius();
	gap = circle_radius - Earth_radius;

	return gap; //зазор
};

//Задача Бассейн
double calc_Pool() // = double calcCost() - расчет стоимости бассейна
{
	int price_concrete = 1000, // Стоимость 1 квадратного метра бетонного покрытия
		price_fence = 2000; // Стоимость 1 погонного метра ограды
	double radius = 3, // радиус бассейна
		width = 1, // ширина бетонной дорожки вокруг бассейна
		length_fence,
		area_concrete,
		cost_concrete,
		cost_fence;

	Circle pool(radius);
	Circle way(radius+width)	; // дорожка

	length_fence = way.getFerence();
	cost_fence = length_fence * price_fence;

	area_concrete = way.getArea() - pool.getArea();
	cost_concrete = area_concrete * price_concrete;

	return (cost_concrete + cost_fence);
};