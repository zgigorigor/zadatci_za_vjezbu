#include<iostream>
#include<math.h>

class fraction
{
public:
	//fraction();
	//~fraction();
	



private:

};


int main()
{
	fraction f1, f2;
	int a, b, c, d, z, x;

	// upisivanje razlomaka
	std::cout << "f1= ";
	std::cin >> a >> b;

	std::cout << "f2= ";
	std::cin >> c >> d;

	// prikaz razlomaka
	std::cout << "f1 = " << a << " / " << b << std::endl;
	std::cout << "f2 = " << c << " / " << d << std::endl;

	if (b == d)
	{
		x = b;
		z = a + c;
	}
	else
	{
		x = b * d;
		z = a * d + b * c;
	}

	std::cout << z << "/" << x << std::endl;

	// zbrajanje razlomaka:
	//fraction f3 = f1 + f2;
	//std::cout << f3 << std::endl;


	std::system("pause");
}