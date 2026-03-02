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

	cout << "Printing Matrix A: " << endl;
	A.print();

	cout << "Printing Matrix B: " << endl;
	B.print();

	C = A.multiply(B);
	cout << "Printing A * B: " << endl;
	C.print();

	Matrix T = A.transpose();
	cout << "Transpose of A:" << endl;
	T.print();

	cout << "Determinant of A: " << A.determinant() << endl;

	Matrix I =A.inverse();
	cout << "Inverse of A:" << endl;
	I.print();
	

	return 0;
}