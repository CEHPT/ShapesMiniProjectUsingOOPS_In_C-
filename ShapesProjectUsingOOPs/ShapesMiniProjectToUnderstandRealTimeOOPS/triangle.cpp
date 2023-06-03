#include "shapes.h"
#include <iostream>
#include <cmath>
using namespace std;
using namespace SHAPES;

void triangle::getInputs()
{	 
	cout << endl << "Enter the shape code = ";
	cin >> shapecode;
	
	cout << endl << "Enter the base of the rectangle = ";
	cin >> base;
	
	cout << endl << "Enter the height of the rectangle = ";
	cin >> height;
}

float triangle::getArea()
{
	return base * height / 2;
}

char* triangle::toString()
{
	char *toStr = new char[80];
	
	sprintf(toStr , "%d %c %f %f %f" , shapecode , shapetype , base , height , getArea());
	
	return toStr;
}


