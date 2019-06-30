#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <time.h>

#define MATRIX_SIZE 10


int main()
{
	//Prvi zadatak:

	srand(time(NULL));

	int matrix[MATRIX_SIZE][MATRIX_SIZE];
	for (int x = 0; x < MATRIX_SIZE; ++x)
	{
		for (int y = 0; y < MATRIX_SIZE; ++y)
		{
			matrix[x][y] = (rand() % 200 + 1) - 100;
			std::cout << matrix[x][y] << "\t";
		}
		std::cout << std::endl;
	}

	int offset;
	int frontDiagonal = 0;
	int backDiagonal = 0;
	int currentOffsetX = 0;
	int currentOffsetY = 0;
	int A = 0;
	int B = 0;
	std::cout << "Offset size: ";
	std::cin >> offset;
	std::cout << std::endl;

	for (int y = currentOffsetY; y < offset + currentOffsetY; ++y)
	{
		if (offset + currentOffsetY > MATRIX_SIZE)
		{
			break;
		}

		for (int x = currentOffsetX, y = currentOffsetY; x < offset + currentOffsetX; ++x)
		{
			if (offset + currentOffsetX > MATRIX_SIZE)
			{
				break;
			}

			std::cout << matrix[x][y] << " ";
			if (x + 1 == offset + currentOffsetX)
			{
				currentOffsetX = x + 1;
			}
			A += x;
		}
		std::cout << std::endl;
		if (y + 1 == offset + currentOffsetY)
		{
			currentOffsetY = y + 1;
		}
		B += y;

		//std::cout << "A = " << A << std::endl;
		//std::cout << "B = " << B << std::endl;
	}

	//Naci najljepsu matricu
	



	system("PAUSE");


}