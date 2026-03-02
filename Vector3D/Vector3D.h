#pragma once
#include <iostream>

class Vector3D
{
private:
	double v[3];

public:
	void read();
	void print();

	friend class Matrix;
};

