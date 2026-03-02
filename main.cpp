#include "Matrix/Matrix.h"
#include <iostream>
using namespace std;

int main()
{
	Matrix A, B, C;

	cout << "Enter Matrix A: " << endl;
	A.read();

	cout << "Enter Matrix B: " << endl;
	B.read();

	C = A.multiply(B);

	cout << "A * B = " << endl;
	C.print();

//	Matrix T = A.transpose();

//	cout << "Transpose of A:" << endl;
//	T.print();

	return 0;
}