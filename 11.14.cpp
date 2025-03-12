
#include <iostream>
#include <array>


int main()
{

	std::array areas{ 100,25,121,46 };

	int heigth{};
	int weight{};
	std::cout << "Enter the number: ";
	std::cin >> heigth >> weight;

	auto found{ std::find_if(areas.begin(), areas.end(),
		[=](int x)
		{
			return (weight * heigth == x);
		} )};

	if (found == areas.end())
		std::cout << "nothing";
	else
		std::cout << "Area found";
	return 0;
}