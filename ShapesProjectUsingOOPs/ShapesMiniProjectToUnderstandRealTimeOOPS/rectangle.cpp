#include "shapes.h"
#include <iostream>
#include <cmath>
using namespace std;
using namespace SHAPES;

void rectangle::getInputs()
{	 
	cout << endl << "Enter the shape code = ";
	cin >> shapecode;
	
	cout << endl << "Enter the width of the rectangle = ";
	cin >> width;
	
	cout << endl << "Enter the length of the rectangle = ";
	cin >> length;
}

float rectangle::getArea()
{
	return length * width;
}

char* rectangle::toString()
{
	char *toStr = new char[80];
	
	sprintf(toStr , "%d %c %f %f %f" , shapecode , shapetype , width , length , getArea());
	
	return toStr;
}


