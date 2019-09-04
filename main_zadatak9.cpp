#include<iostream>

class Byte
{
	/*
	overload operatore -> istream, ostream, +, i++
	potpis za operator ++
	byte operator++()(int){ 1000..}
	*/

public:
	Byte() {}

	Byte(char value)
	{
		_value = value;
	}
	

	Byte operator+(Byte other)
	{
		Byte result;
		result._value = _value + other._value;
		return result;
	}
	
	friend std::ostream& operator <<(std::ostream &out, const Byte &current)
	{
		out << current._value;
		return out;
	}

	friend std::istream& operator <<(std::istream &in, Byte &current)
	{
		in >> current._value;
	}
	
	Byte operator++(int)
	{
		Byte result;
		result._value = _value + 1;
		return result;
	}

private:
	char _value;
};


int main()
{
	Byte first(10);
	Byte second(20);
	Byte result = first + second;

	std::cout << result;
	
	/*
	Byte a, b;
	std::cin >> a >> b;
	Byte c = a + b;
	std::cout << c++;
	*/

	std::system("pause");
}