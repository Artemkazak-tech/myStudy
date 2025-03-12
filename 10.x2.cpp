
#include <iostream>
#include <string>
#include <vector>
struct Names
{
	std::string name;
	int mark;
};


int getNumber()
{
	std::cout << "Enter the number:";
	int x{};
	std::cin >> x;
	return x;
}
std::vector <Names> getStudents()
{
	using vector = std::vector <Names>;

	vector students(static_cast<vector::size_type>(getNumber());

	int min{ 1 };

	for (auto i : students)
	{

	}
}

int main()
{
	getNumber();

	std::vector names{"ara"};


	return 0;
}

