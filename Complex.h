/*
 * Complex.h
 *
 *  Created on: 15/nov/2017
 *      Author: tps8
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
public:
	Complex();
	virtual ~Complex();
	//Propietà
		double re;
		double im;
		bool Valido;
	// Metodi
		void Stampa (int formato);
		void Somma(Complex *A, Complex *B );
		void Differenza(Complex *A, Complex *B );
		void Prodotto(Complex *A, Complex *B );
		void Quoziente(Complex *A, Complex *B );
};

#endif /* COMPLEX_H_ */
