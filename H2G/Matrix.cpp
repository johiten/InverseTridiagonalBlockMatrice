#include "Complex.h"
#include "CMatrix.h"
#include <iostream>
#include <cmath>
using namespace std;

bool CMatrix::check_size(CMatrix& mm){
	if (row == mm.get_row() && col == mm.get_col()) return true;
	return false;
}

CMatrix& CMatrix::operator +(CMatrix& m){
	if (check_size(m)){
		CMatrix tmp = m;
		for (int i = 0; i < bm.size(); ++i){
			for (int j = 0; j < bm[i].size(); ++j){
				m.bm[i][j] = m.bm[i][j]+bm[i][j];
			}
		}
		return tmp;
	}
	/*
	Throw exception
	*/
}
CMatrix& operator -(CMatrix& m);
CMatrix& operator *(CMatrix& m);

Complex CMatrix::get_item(int row, int col){
	return bm[row][col];
}

CMatrix& CMatrix::get_block(int row, int col, int row_num, int col_num){

}

void show();

void show(const CMatrix& m);

int CMatrix::get_row(){
	return this->row;
}
int CMatrix::get_col(){

}
int CMatrix::get_lu_row(){

}
int CMatrix::get_lu_col(){

}

void CMatrix::set_row(int n){
	this->row = n;
}
void CMatrix::set_col(int n){
	this->col = n;
}
void CMatrix::set_lu_row(int n){
	this->lu_row = n;
}
void CMatrix::set_lu_col(int n){
	this->lu_col = n;
}

