#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Complex.h"
#include "CMatrix.h"
using namespace std;
int main(){
	Complex cc(5,3);
	cout << cc.get_real() << ' ' << cc.get_imag() << endl;
	Complex t = cc + cc;
	t.Show();
	getchar();
	return 0;
}