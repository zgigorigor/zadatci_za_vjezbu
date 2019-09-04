/*
2. Netko je mijenjao Mirekovu random funkciju te ona više ne vraæa pseudosluèajne brojeve. 
Sada je oèito da funkcija vraæa èešæe brojeve èija je meðusobna razlika toèno K. 
Kako je Mirek znatiželjan po prirodi zanima ga koliko parova brojeva (od N razlièitih) ima razliku K.

Pomoæ:  Koristite standardne funkcije za pretraživanje i sortiranje
*/

#include <iostream>
#include <time.h>
#include <algorithm>

#define MAX_SIZE = 100;

int main()
{
	int generatedNumber = 0;
	int	N, K;

	std::cout << "What difference of your pairs do you want? " << std::endl;
	std::cin >> K;


	std::cout << "How many pair of numbers you want to check? " << std::endl;
	std::cin >> N;

	if (N < 100)
	{
		for (int i = 0; i < N; ++i)
		{
			srand(time(NULL));
			generatedNumber = rand() % 100;
			//std::cout << generatedNumber << "\n";
			if (generatedNumber = K)
			{

			}
		}

	}
	else
	{
		std::cout << "Chosen nmumber is out of range." << "\n";
	}
	
		
	/*
	srand((unsigned)time(0)); 
    int i;
    i = (rand()%6)+1; 
    cout << i << "\n"; 
	*/

	std::system("pause");
}