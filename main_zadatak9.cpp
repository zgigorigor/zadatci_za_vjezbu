#include<iostream>

class Byte
{
	/*
	overload operatore -> istream, ostream, +, i++
	potpis za operator ++
	byte operator++()(int){ 1000..}
	*/

public:
	Byte();
	Byte(char value)
	{
		_value = value;
	}
	~Byte();

	Byte operator+ (Byte other)
	{
		Byte result;
		result._value = _value + other._value;
		return result;
	}

	std::ostream& operator <<(std::ostream &out, const Byte &current)
	{
		out << current._value;
	}

	std::istream& operator <<(std::istream &input, const Byte &current)
	{
		input << current._value;
	}

	Byte operator++ (Byte other)
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

	/*
	Byte a, b;
	std::cin >> a >> b;
	Byte c = a + b;
	std::cout << c++;
	*/

	std::system("pause");
}