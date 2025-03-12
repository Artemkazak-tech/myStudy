// 11.11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>



int main(int argc, char* argv[])
{




	std::cout << argc << '\n';


	for (int x{}; x < argc; ++x)
	{
		std::cout << x << ' ' << argv[x] << '\n';
	}
	return 0;
}