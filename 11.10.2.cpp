




#include <iostream>

void print( unsigned int x)
{
	if (x <= 0)
		return;
	print(x / 2);
	std::cout << x % 2;

}

int main()
{
	int x{};
	std::cout << "Enter the number: ";
	std::cin >> x;

	print(x);

	return 0;
}


