#pragma once
#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
// Mihail Gluntsov header file


// ------Arrays------

//create the array
int** crt_arr(int m, int n);

//output array
void outP_arr(int **arr, int m, int n);

// option A+B
void sum_arr(int** A, int** B, int m);

//option A*B
void mulitplay_arr(int** A, int m_A, int n_A, int** B, int m_B, int n_B);

//option A+k
void sumK_arr(int** A, int m, int n,int k);

//delete Array
void dlt_arr(int** A, int m);

// ------ERROR-------
void err_msg();
