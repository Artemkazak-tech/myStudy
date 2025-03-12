#include <iostream>
#include <functional>

int inputValues()
{
	int f{};
	std::cout << "Enter the value ";
	std::cin >> f;
	return f;
}
char getOperator()
{
	char c{};
	do
	{
		std::cout << "Enter the maths symbol ";
		std::cin >> c;
	}
	while (c != '+' && c != '-'
		&& c != '*' && c != '/');
	
	return  c;
}

int add(int x, int y)
{
	return x + y;
}
int substact(int x, int y)
{
	return x - y;
}
int multiply(int x, int y)
{
	return x * y;
}
int division(int x, int y)
{
	return x / y;
}

using ArithmeticFunction = std::function<int(int, int)>;


ArithmeticFunction getAruthmeticFunction(char& op)
{
	switch (op)
	{
		case '+': return &add;
		case '-': return &substact;
		case '*': return &multiply;
		case '/': return &division;
	}
}
int main()
{
	int x{ inputValues() };
	char op{ getOperator() };
	int y{ inputValues() };

	ArithmeticFunction fcn{ getAruthmeticFunction(op) };

	std::cout << x << ' ' << op << ' ' << y << ' ' << fcn(x, y);
	return 0;
}