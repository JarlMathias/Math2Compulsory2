#pragma once
#include <iostream>
#include "../Vector3D/Vector3D.h"


class Matrix
{
public:
    Matrix();

    Matrix add(Matrix Other);
    Matrix multiply(Matrix Other);
    Vector3D multiply(Vector3D v);
    Matrix transpose();

    void read();
    void print();


    double determinant();
    Matrix inverse();

private:
    static const int M = 10;
    static const int N = 10;
    double A[M][N];
    int m; // actual number of rows
    int n; // actual number of columns
};