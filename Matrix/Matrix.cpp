#include "Matrix.h"

Matrix::Matrix()
{
    m = 3;
    n = 3;
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            A[i][j] = 0;
}

Matrix Matrix::add(Matrix Other) {
    Matrix result;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            result.A[i][j] = A[i][j] + Other.A[i][j];
        }
    }
    return result;
}

void Matrix::read()
{
//    std::cout << "Create Matrix: " << std::endl;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << i + 1 << j + 1 << ": ";
            std::cin >> A[i][j];
        }
    }
}


void Matrix::print()
{
//    std::cout << "Printing Matrix:" << std::endl;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << A[i][j];
        }
        std::cout << std::endl;
    }
}

Matrix Matrix::multiply(Matrix Other)
{
        Matrix result;

        if (n != Other.m) {
            std::cout << "Multiplication not defined" << std::endl;
            return result;
        }


        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {

                result.A[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    result.A[i][j] += A[i][k] * Other.A[k][j];
                }
            }
        }
        return result;
}

Matrix Matrix::transpose()
{
    Matrix result;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result.A[j][i] = A[i][j];
    return result;
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
