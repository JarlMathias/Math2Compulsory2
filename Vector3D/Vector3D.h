#pragma once
#include <iostream>

//defines the functions for the vector calculations
class Vector3D
{
private:
	//tells how many Vector points there are in the matrix
	double Vectorpunkt[3];

public:
	void read();
	void print();

	friend class Matrix;
};

