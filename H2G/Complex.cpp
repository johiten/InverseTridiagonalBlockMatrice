#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex(double r, double i){
	this->real = r;
	this->imag = i;
	this->norm = sqrt(r*r+i*i);
}

double Complex::get_norm(){
	return this->norm;
}

double Complex::get_real(){
	return this->real;
}

double Complex::get_imag(){
	return this->imag;
}

void Complex::Show(){
	cout << "( " << this->get_real() << "  , " << this->get_imag() << " )" << endl;
}

Complex& Complex::operator+(const Complex& c2){
	return Complex(this->real + c2.real, this->imag + c2.imag);
}

Complex& Complex::operator-(const Complex& c2){
	return Complex(this->real - c2.real, this->imag - c2.imag);
}

Complex& Complex::operator*(const Complex& c2){
	return Complex(this->real * c2.real - this->imag * c2.imag, this->imag * c2.real + this->real * c2.imag);
}

Complex& Complex::operator/(const Complex& c2){
	return Complex((this->real * c2.real - this->imag * c2.imag) / (c2.norm * c2.norm), (this->imag * c2.real - this->real * c2.imag) / (c2.norm * c2.norm));
}


