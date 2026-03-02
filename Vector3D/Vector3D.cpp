#include "Vector3D.h"

// Asks and reads the inputs for the Vectors
void Vector3D::read() {
	std::cout << "Enter vector values: " << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "v[" << i << "] = ";
		std::cin >> Vectorpunkt[i];
	}
}

// Prints the input of the different Vectors.
void Vector3D::print()
{
	std::cout << "Vector: " << std::endl;

	for (int i = 0; i < 3; i++)
		std::cout << Vectorpunkt[i] << std::endl;
}
