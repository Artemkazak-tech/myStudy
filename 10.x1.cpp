#include <iostream>
#include<array>
#include <numeric>

enum typesOfThings
{
	health_potion,
	torch,
	arrow,
	max_things,
};

void countTotalItems(const std::array <int, typesOfThings::max_things> &things)
{
		std::cout << std::reduce(things.begin(), things.end()) << '\n';
	
}
int main()
{
	std::array things{ 2,5,10 };

	countTotalItems(things);
	std::cout << things[typesOfThings::torch] << '\n';

	return 0;
}