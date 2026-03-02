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
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

Matrix Matrix::multiply(Matrix Other)
{
    //sets a default matrix as 0
        Matrix result;
//checks if its possible to multiply the matrixes
        if (n != Other.m) {
            std::cout << "Multiplication not defined" << std::endl;
            return result;
        }

        //sets a for-loop to go through every number in the matrix.
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < Other.n; j++) 
            {

                result.A[i][j] = 0;
//for-loop that multiplies the two matrixes together if possible
                for (int k = 0; k < n; k++)
                {
                    result.A[i][j] += A[i][k] * Other.A[k][j];
                }
            }
        }
        result.m = m;
        result.n = Other.n;

        return result;
}

Matrix Matrix::transpose()
{
    //for-loop that goes trough all the number and flips the other of rows and coloums.
    Matrix result;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result.A[j][i] = A[i][j];
    return result;
}

double Matrix::determinant()
{
    if (m != n)
    {
        std::cout << "Determinant not defined for non-square matrices" << std::endl;
        return 0.0;
    }

    if (m == 1)
    {
        return A[0][0];
    }

    if (m == 2)
    {
        return A[0][0] * A[1][1] - A[0][1] * A[1][0];
    }

    if (m == 3)
    {
        return
            A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) -
            A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) +
            A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    }

    std::cout << "Determinant only implemented for 1x1, 2x2, and 3x3 matrices" << std::endl;
    return 0.0;
}

//Matrix Matrix::inverse()
//{
//    //Matrix inv;
//    //if (m != n) {
//    //    std::cout << "Inverse not defined" << std::endl;
//
//    //}
//    //double detA = determinant();
//    //if (detA == 0) {
//    //    std::cout << "Matrix does not have an inverse" << std::endl;
//    //}
//
//
//
//    return Matrix();
//}
Matrix Matrix::inverse()
{
    Matrix result;
    Matrix inv;
    double detA = determinant();
    if(m != n) {
        std::cout << "Inverse not defined" << std::endl;
        return result;
    }
    if (detA == 0) {
        std::cout << "Matrix does not have an inverse" << std::endl;
        return result;
    }

    if (m == 3)
    {
        Matrix cofactor;

        cofactor.A[0][0] = std::pow(-1, 1 + 1) * (A[1][1] * A[2][2] - A[1][2] * A[2][1]);
        cofactor.A[1][0] = std::pow(-1, 2 + 1) * (A[0][1] * A[2][2] - A[0][2] * A[2][1]);
        cofactor.A[2][0] = std::pow(-1, 3 + 1) * (A[0][1] * A[1][2] - A[0][2] * A[1][1]);
        cofactor.A[0][1] = std::pow(-1, 1 + 2) * (A[1][0] * A[2][2] - A[1][2] * A[2][0]);
        cofactor.A[1][1] = std::pow(-1, 2 + 2) * (A[0][0] * A[2][2] - A[0][2] * A[2][0]);
        cofactor.A[2][1] = std::pow(-1, 3 + 2) * (A[0][0] * A[1][2] - A[0][2] * A[1][0]);
        cofactor.A[0][2] = std::pow(-1, 1 + 3) * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
        cofactor.A[1][2] = std::pow(-1, 2 + 3) * (A[0][0] * A[2][1] - A[0][1] * A[2][0]);
        cofactor.A[2][2] = std::pow(-1, 3 + 3) * (A[0][0] * A[1][1] - A[0][1] * A[1][0]);

        

        Matrix adj = cofactor.transpose();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                result.A[i][j] = adj.A[i][j] * (1 / detA);
            }
        }
    }

    
    return result;
}


Vector3D Matrix::multiply(Vector3D v)
{
    Vector3D result;
// for loop which puts each number that you put into the calculator at the right localtion in the matrix
    for(int i = 0; i < 3; i++) {
        result.Vectorpunkt[i] = 0;

// takes the vectorPoints and multiplies them with the first Matrix
        for (int j = 0; j < 3; j++) {
            result.Vectorpunkt[i] += A[i][j] * v.Vectorpunkt[j];
        }
    }

    return result;
}
