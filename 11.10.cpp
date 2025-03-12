// 11.10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int fibonacci(int x)
{
	if (fibonacci == 0)
	{
		return 0;
	}
	if (fibonacci == 1)
	{
		return 1;
	}
	return fibonacci(x - 1) + fibonacci(x - 2);

}

int main()
{
	for (int x{ 0 }; x < 13; ++x)
	{
		std::cout << fibonacci(x);
	}
	return 0;
}