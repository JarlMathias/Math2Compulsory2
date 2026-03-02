#pragma once
#include <iostream>

class Vector3D
{
private:
	double Vectorpunkt[3];

public:
	void read();
	void print();

	friend class Matrix;
};

