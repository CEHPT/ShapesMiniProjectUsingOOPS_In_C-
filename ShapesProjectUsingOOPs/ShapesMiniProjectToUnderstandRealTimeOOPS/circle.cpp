#include "shapes.h"
#include <iostream>
#include <cmath>
using namespace std;
using namespace SHAPES;

void circle::getInputs()
{	 
	cout << endl << "Enter the shape code = ";
	cin >> shapecode;
	
	cout << endl << "Enter the radius of circle = ";
	cin >> r;
}

float circle::getArea()
{
	return 22/7.0 * pow(r , 2);
}

char* circle::toString()
{
	char *toStr = new char[80];
	
	sprintf(toStr , "%d %c %f %f" , shapecode , shapetype , r , getArea());
	
	return toStr;
}


