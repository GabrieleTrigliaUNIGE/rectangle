/// \file main.cpp
///	\brief interface to the program
///	\author Gabriele Triglia
///
///	Details.
///

#include<iostream>
#include "CRectangle.h"

using namespace std;


int main() {

	Rectangle rectA(10,5); 
	//Rectangle rectB(3,7); 
    rectA.SetText("Rettangolo1");
    //rectB.SetText("Rettangolo2");
    Rectangle rectB = rectA;
	
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump(); 
	cout << "****** ********* ******" << endl;
	
	cout << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump(); 
	cout << "****** ********* ******" << endl;
	
	rectA.SetWidth(9);
	rectB.SetHeight(15);
		
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump();
	cout << "****** ********* ******" << endl;
	
	cout << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump();
	cout << "****** ********* ******" << endl;
	
	cout << "Perimeter A : " << rectA.GetPerimeter() << endl; 
	cout << "Area A : " << rectA.GetArea() << endl; 
	cout << "Perimeter B : " << rectB.GetPerimeter() << endl; 
	cout << "Area B : " << rectB.GetArea() << endl;

	//todo: funzione che faccia qualcosa con un rettangolo

	return 0;
}