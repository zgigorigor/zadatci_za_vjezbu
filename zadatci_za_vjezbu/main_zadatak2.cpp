/*
2. Netko je mijenjao Mirekovu random funkciju te ona vi�e ne vra�a pseudoslu�ajne brojeve. 
Sada je o�ito da funkcija vra�a �e��e brojeve �ija je me�usobna razlika to�no K. 
Kako je Mirek znati�eljan po prirodi zanima ga koliko parova brojeva (od N razli�itih) ima razliku K.

Pomo�:  Koristite standardne funkcije za pretra�ivanje i sortiranje
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