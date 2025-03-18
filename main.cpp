/**
 * 
 */

#include <iostream>
#include "CRectangle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int altezza, base;
    cout << "Inserisci la base del rettangolo: ";
    cin >> base;
    cout << "Inserisci l'altezza del rettangolo: ";
    cin >> altezza;
    cout << "PROGRAMMA RETTANGOLI TEST" << endl;
    Rectangle r1 = Rectangle(base, altezza);
    cout << "Area: " << r1.GetArea() << endl;
    cout << "Perimetro: " << r1.GetPerimeter() << endl;
    r1.Dump();
    return 0;
}

