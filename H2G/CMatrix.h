#pragma once
#include <vector>
#include "Complex.h"
class CMatrix{
public:
	CMatrix& operator +(CMatrix& m);
	CMatrix& operator -(CMatrix& m);
	CMatrix& operator *(CMatrix& m);

	//get bm[row][col]; Index from 0 to n-1
	Complex get_item(int row, int col);

	//get block matrix from bm[row][col] to bm[row+row_num-1][col+col_num-1];
	//row_num and col_num need to be larger than 0.
	CMatrix& get_block(int row, int col, int row_num, int col_num);

	//show the whole matrix
	void show();

	//show matrix m
	void show(const CMatrix& m);

	int get_row();
	int get_col();
	int get_lu_row();
	int get_lu_col();

	void set_row(int);
	void set_col(int);
	void set_lu_row(int);
	void set_lu_col(int);

	//is 2 matrices' sizes are same, return true. Else return false.
	bool check_size(CMatrix& m);


private:
	vector<vector<Complex>> bm;//bitmap
	int row, col, lu_row, lu_col;
};