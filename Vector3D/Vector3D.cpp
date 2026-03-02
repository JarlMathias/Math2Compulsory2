#include "Vector3D.h"

void Vector3D::read() {
	std::cout << "Enter vector values: " << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "v[" << i << "] = ";
		std::cin >> v[i];
	}
}

void Vector3D::print()
{
	std::cout << "Vector: " << std::endl;

	for (int i = 0; i < 3; i++)
		std::cout << v[i] << std::endl;
}