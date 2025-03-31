/// \file main.cpp
///	\brief interface to the program
///	\author Gabriele Triglia
///
///	Details.
///

#include <iostream>
#include <cstring>
#include "CRectangle.h"

using namespace std;

/**
 * @brief funzione che disegna un rettangolo date le sue dimensioni
 * @param r istanza di rettangolo
 */
void rect_draw(Rectangle r)
{
	int larghezza = r.GetWidth();
	int altezza = r.GetHeight();

	cout << "\tStampa di rettangolo: " << larghezza << "x" << altezza << endl;
	cout << "     "; //spazi a sinistra 
	// stampa prima riga
	for (int i = 0; i < larghezza; i++)
	{
		cout << " . ";
	}
	cout << endl;
	// stampa righe interne
	for (int i = 0; i < altezza - 2; i++)
	{
		cout << "     "; //spazi a sinistra 
		for (int i = 0; i < larghezza; i++)
		{
			if(i == 0 || i == larghezza - 1){
				cout << " . ";
			} else {
				cout << "   ";
			}
		}
		cout << endl;
	}
	// stampa ultima riga
	cout << "     "; //spazi a sinistra 
	for (int i = 0; i < larghezza; i++)
	{
		cout << " . ";
	}
	cout << endl;
}

/**
 * @brief funzione main per interfaccia
 */
int main()
{

	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	Rectangle rectC;
	
	char msg1[1000];
	int size = strlen("prova A");
	memcpy(msg1,"prova A",size); 
	msg1[size]='\0';

	char msg2[1000];
	size = strlen("prova B");
	memcpy(msg2,"prova B",size); 
	msg2[size]='\0';
	
	rectA.SetText(msg1);
	rectB.SetText(msg2);

	cout << endl;
	cout << "rectangle A" << endl;
	rectA.Dump();

	cout << endl;	
	cout << "rectangle B" << endl;
	rectB.Dump();

	cout << endl;	
	cout << "rectangle C" << endl;
	rectC.Dump();

			
	rectC=rectA; 
	
	cout << endl;	
	cout << "rectangle C" << endl;
	rectC.Dump();

	cout << "\t\t\tDRAW RECTANGLES\n" << endl;

	rect_draw(rectA);
	rect_draw(rectB);

	if (rectA == rectC) 
		cout<< "A e C sono uguali" << endl;
	else 
		cout<< "A e C sono diversi" << endl;
		
	
	return 0;

	return 0;
}