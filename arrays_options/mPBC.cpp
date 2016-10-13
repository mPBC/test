#include "mPBC.h"
#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
//mPBC.cpp 
//Arrays options: 
void err_msg() {
	cout << "\n~~~~~~~~~~\nERROR\n~~~~~~~~~~\n";
}
int** crt_arr(int m, int n) {

	if (m > 0 && n > 0) {
		//create arr
		int **arr = new int*[m];

		for (int i = 0; i != m; i++) {
			arr[i] = new int[n];
		}

		//filling arr
		for (int i = 0; i != m; i++) {
			for (int j = 0; j != n; j++) {
				cout << "\nPlease, enter " << i + 1 << "st row & " << j + 1 << "st column: ";
				cin >> arr[i][j];
			}
			cout << "\n-------\n" << i + 1 << " - row have finished" << endl;
		}
		cout << "\n==========================================================\n";
		return arr;
	}
	else {
		cout << "\n~~~~~~~~~~\nRows/Columns must be > 0\n~~~~~~~~~~\n"; 
		return 0;
	}
	

}
void outP_arr(int **arr, int m, int n) {
	cout << "\n Array " << m << "x" << n << "\n" << endl;
	for (int i = 0; i != m; i++) {
		for (int j = 0; j != n; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << "\n";
	}
	cout << "\n==========================================================\n";
}
void sum_arr(int** A, int** B, int m) {
	if (A > 0 && B > 0 && m > 0) {
		int** C = new int*[m];
		for (int i = 0; i != m; i++) {
			C[i] = new int[m];
		}
		for (int i = 0; i != m; i++) {
			for (int j = 0; j != m; j++) {
				C[i][j] = A[i][j] + B[i][j];
			}
		}
		cout << "\nArray A+B = :\n----------\n";
		outP_arr(C, m, m);
	}
	else cout << "\nSize and arrays must be >0\n";
		err_msg();
	
}
void mulitplay_arr(int** A, int m_A, int n_A, int** B, int m_B, int n_B) {

	if (A > 0 && B > 0 && m_A > 0 && n_A > 0 && m_B > 0 && n_B > 0 && n_A == m_B) {
		int** C = new int*[m_A];
		for (int i = 0; i != m_A; i++) {
			C[i] = new int[n_B];
		}
		for (int i = 0; i != m_A; i++) {
			for (int j = 0; j != n_B; j++) {
				C[i][j] = 0;
				for (int x = 0; x != n_A; x++) {
					C[i][j] += A[i][x] * B[x][j];
				}
			}
		}
		cout << "A*B = \n";
		outP_arr(C, m_A, n_B);
	}
	else cout << "\n Must have: Columns A = Row B\n~~~~\nArrays must be >0\n";
		err_msg();
} 
void sumK_arr(int** A, int m, int n,int k) {
	if (A > 0 && m > 0 && n > 0) {
		for (int i = 0; i != m; i++) {
			for (int j = 0; j != n; j++) {
				A[i][j] += k;
			}
		}

		cout << "A+k = \n";
		outP_arr(A, m, n);
	}
	else err_msg();
}
void dlt_arr(int** A, int m) {
	if (A > 0 && m > 0) {
		for (int i = 0; i != m; i++) {
			delete []A[i];
		}
	}
	else err_msg();
}