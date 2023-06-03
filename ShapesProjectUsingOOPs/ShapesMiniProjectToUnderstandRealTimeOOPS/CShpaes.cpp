#include "CShapes.h"
#include "shapes.h"
#include <iostream>
#include <fstream>
using namespace std;
using namespace SHAPES;

void CShapes::addShape()
{
	int shapeOption;
	shapes *s;
	ofstream f;
	
	shapeOption  = o.shapesMenu();
	
	switch(shapeOption)
	{
		case 1:
			s = new circle();
			break;
		case 2:
			s = new rectangle();
			break;
		case 3:
			s = new triangle();
			break;
		case 4:
			return;
			
	}
	
	s->getInputs();
	f.open("shapesEntery.txt" , ios::app);
	f << s->toString() << endl;
	f.close();
	
	delete s;
}

void CShapes::listShapes()
{
	ifstream fr;
	string str;
	
	cout << endl << endl;
	
	cout << "LIST OF SHAPES ... " << endl;
	fr.open("shapesEntery.txt");
	
	while(!fr.eof())
	{
		getline(fr,str);
		
		cout << str << endl;
	}
	fr.close();
}

void CShapes::start()
{
	int opt;
	
	do{
		opt = o.mainMenu();
		
		if(opt == 3)
			break;;
			
		switch(opt)
		{
			case 1:
				addShape();
				break;
			case 2:
				listShapes();
				break;	  
		}
		
	}while(opt != 3);	 
}

