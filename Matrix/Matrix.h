#pragma once
#include <iostream>
#include "../Vector3D/Vector3D.h"

class Matrix
{
public:
    Matrix();
    Matrix add(Matrix B);
    void read();
    void print();
    Matrix multiply(Matrix other);
    Matrix transpose();
    double determinant();
    Matrix inverse();
    Vector3D multiply(Vector3D v);

private:
    static const int M = 10;
    static const int N = 10;
    double A[M][N];
    int m; // actual number of rows
    int n; // actual number of columns
};