#include "menu.h"
#include <iostream>
using namespace std;
using namespace SHAPES;

int menu::mainMenu()
{	 
	cout << "\n\nMenu Selection" << endl;
	cout << "-------------------" << endl;
	cout << "1.Add Shape   " << endl;
	cout << "2.List Shapes " << endl;
	
	cout << "3.Exit"         << endl;
	
	cout << endl << "Selection (1-3) : ";
	cin >> selection;
	
	return selection;
}

int menu::shapesMenu()
{
	cout << endl;
	
	cout << "Shape Selection" << endl;
	cout << "---------------" << endl;
	cout << "1.Circle        "<< endl;
	cout << "2.Rectangle    " << endl;
	cout << "3.Triangle " << endl;
	cout << "4.Go to Main Menu " << endl;
	
	cout << endl << "Selection (1-4) : ";
	cin >> selection;
	
	return selection;
}

int menu::lastSelection()
{
	return selection;
}

