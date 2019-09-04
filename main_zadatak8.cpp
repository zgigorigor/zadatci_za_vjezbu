#include<iostream>


int main()
{
	uint32_t arr[] = { 10, 17, 13, 15 };

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] > 1 && arr[i] / arr[i] == 1 && arr[i] / 1 == arr[i])
		{
			std::cout << "Prvi prosti broj u polju je: " << arr[i] << std::endl;
		}
	}
	
	std::system("pause");
}