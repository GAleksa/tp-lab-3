
#ifndef CIRCLE_H
#define CIRCLE_H

//#include 

const double pi = 3.14;

class Circle
{
private:
	double radius, ference, area;
public:
	Circle(double radius);
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	double getRadius(); //получить радиус, т.е вывести? поэтому double?
	double getFerence(); //получить длину окружности
	double getArea(); // получить площадь
};

#endif