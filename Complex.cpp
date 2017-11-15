/*
 * Complex.cpp
 *
 *  Created on: 15/nov/2017
 *      Author: tps8
 */

#include "Complex.h"
#include <cmath>
#include <iostream>
using namespace std;
Complex::Complex() {
	// TODO Auto-generated constructor stub
	re = 0.0;
	im = 0.0;
	Valido = false;
}

Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

void Complex::Stampa (int formato)
{
	if (Valido == true)
	{
		switch (formato)
		{
		case 1 :

			if (im > 0.0)
			{
				cout << re << " + " << im << "j" << endl;
			}

			else
			{
				cout << re << " " << im << "J" << endl;
			}

			break;

		case 2 :

			if (im > 0.0)
			{
				cout << re << "+j" << im << endl;
			}

			else
			{
				cout << re << "-j" << abs (im) << endl;
			}

			break;

		default :

			cout << "ah ... boh :(" << endl;

		break;
		}
	}

	else

		cout << " Numero non valido" << endl;

}

void Complex::Somma (Complex *A, Complex *B)
{

	if (Valido == true)
	{
		re = A -> re + B -> re;
		im = A -> im + B -> im;
		Valido = true;
	}

	else

		Valido = false;

}

void Complex::Differenza (Complex *A, Complex *B)
{

	if (Valido == true)
	{
		re = A -> re - B -> re;
		im = A -> im - B -> im;
		Valido = true;
	}

	else

		Valido = false;

}

void Complex::Prodotto (Complex *A, Complex *B)
{

	if (Valido == true)
	{
		re = A -> re * B -> re - A -> im * B -> im;
		im = A -> im * B -> re - A -> re * B -> im;
		Valido = true;
	}

	else

		Valido = false;

}

void Complex::Quoziente (Complex *A, Complex *B)
{

	if (Valido == true)
	{
		re = (((A -> re * B -> re) + (A -> im * B -> im)) / ((B -> re * B -> re) + (B -> im * B -> im)));
		im = (((A -> im * B -> re) - (A -> re * B -> im)) / ((B -> re * B -> re) + (B -> im * B -> im)));
		Valido = true;
	}

	else

		Valido = false;

}
