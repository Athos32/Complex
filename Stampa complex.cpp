//============================================================================
// Name        : Stampa.cpp
// Author      : nik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

int main() {
	//Dichiarazioni
		Complex A;
		int Formato;
	//Inserire il numero
		cout << "parte reale =" << endl;
			cin >> A.re;
		cout << "parte Immaginaria =" << endl;
			cin >> A.im;
		A.Valido = true;
	//Richiedo il Formato di stampa
		cout << "Inserire in metodo di stampa : 1) a+bj    2)a+jb " << endl;
			cin >> Formato;
	//Richiamo stampa
		A.Stampa(Formato);
	return 0;
}
