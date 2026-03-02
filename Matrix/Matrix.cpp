#include "Matrix.h"

Matrix::Matrix()
{
    m = 3;
    n = 3;
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            A[i][j] = 0;
}

Matrix Matrix::add(Matrix B) {
    Matrix result;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            result.A[i][j] = A[i][j] + B.A[i][j];
        }
    }
    return result;
}

void Matrix::read()
{
    std::cout << "Create Matrix: " << std::endl;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << i + 1 << j + 1 << ": ";
            std::cin >> A[i][j];+
        }
    }
}


void Matrix::print()
{
    std::cout << "Printing Matrix:" << std::endl;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << A[i][j];
        }
        std::cout << std::endl;
    }
}

Matrix Matrix::multiply(Matrix other)
{
    return Matrix();
}

Matrix Matrix::transpose()
{
    return Matrix();
}

double Matrix::determinant()
{
    return 0.0;
}

Matrix Matrix::inverse()
{
    return Matrix();
}

Vector3D Matrix::multiply(Vector3D v)
{
    return Vector3D();
}
