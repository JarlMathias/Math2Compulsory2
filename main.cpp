#include "Matrix/Matrix.h"
#include "Vector3D/Vector3D.h"
#include <iostream>
using namespace std;

int main()
{
	Matrix A, B, C;
	Vector3D v;
	v.read();

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


	Vector3D result = A.multiply(v);
	cout << " Result of A * V: " << endl;
	result.print();

	return 0;
}