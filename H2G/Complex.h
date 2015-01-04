#pragma once
class Complex{
	/*
	real part, imaginary part, norm.
	*/
private:
	double real, imag, norm;
public:
	/*
	Construction function with 2 parameters. The first is real part, and the second is imaginary part.
	*/
	Complex(double,double);

	//op +
	Complex& operator +(const Complex&);

	//op -
	Complex& operator -(const Complex&);

	//op *
	Complex& operator *(const Complex&);

	//op /
	Complex& operator /(const Complex&);

	
	//Return norm.
	double get_norm();
	
	//Return real part.
	double get_real();
	
	//Return imaginary part.
	double get_imag();

	//Print this complex number
	void Show();
};