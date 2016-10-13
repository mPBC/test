// arrays_options.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mPBC.h"



// Arrays option
// A+k; A+B; A*B;
// _sqr - square array

int main()
{
	char repeat;
	for (repeat = 'y'; repeat == 'y'; cin >> repeat) {
		char repeat;
		int opt;
		int** A = new int*;
		int** B = new int*;
		int* m = new int;
		int* n = new int;
		int* m2 = new int;
		int* n2 = new int;
		int* k = new int;
		cout << "\n=====\nPlease, choose the option\n=====\n" << endl;
		cout << "A+k = 1\n-----\n";
		cout << "A+B = 2\n-----\n";
		cout << "A*B = 3\n-----\n";
		cin >> opt;
		if (opt >= 1 && opt <= 3) {
			switch (opt)
			{
			case 1:
				cout << "Enter row: ";
				cin >> *m;
				cout << "\nEnter columns: ";
				cin >> *n;
				cout << "\nEnter coeficent: ";
				cin >> *k;
				A = crt_arr(*m, *n);
				sumK_arr(A, *m, *n, *k);
				break;
			case 2:
				cout << "\Enter size of arrays: ";
				cin >> *m;
				cout << "\nArray A" << endl;
				A = crt_arr(*m, *m);
				cout << "\nArray B" << endl;
				B = crt_arr(*m, *m);
				sum_arr(A, B, *m);
				break;
			case 3:
				cout << "\nArray A" << endl;
				cout << "Enter row: ";
				cin >> *m;
				cout << "\nEnter columns: ";
				cin >> *n;

				cout << "\nArray B" << endl;
				cout << "Enter row: ";
				cin >> *m2;
				cout << "\nEnter columns: ";
				cin >> *n2;

				cout << "\nArray A" << endl;
				A = crt_arr(*m, *n);
				cout << "\nArray B" << endl;
				B = crt_arr(*m2, *n2);

				mulitplay_arr(A, *m, *n, B, *m2, *n2);
				break;
			}

			//delete
			delete m;
			delete n;
			delete k;
			delete m2;
			delete n2;
			delete A;
			delete B;
			
			cout << "\n====\nRepeat? (y/n) :";
		}
		else
			cout << "\n====\nRepeat? (y/n) :";
		
	}
			cout << "\n~~~~~HAVE A NICE DAY~~~~~" << endl;
			system("pause");
			return 0;
	}