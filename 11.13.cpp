#include <iostream>
#include <string>
#include <array>
#include <algorithm>


struct Student
{
	std::string name{ };
	int mark{};
};

int main()
{
    std::array <Student, 8> arr{ {
        { "Albert", 3 },
        { "Ben", 5 },
        { "Christine", 2 },
        { "Dan", 8 },        // больше всего баллов (8).
        { "Enchilada", 4 },
        { "Francis", 1 },
        { "Greg", 3 },
        { "Hagrid", 5 }
    } };

    auto best{
    std::max_element(arr.begin(), arr.end(), [](const auto& a, const auto& b)
        {return (a.mark < b.mark);
        })
    };

    std::cout << best->name;


	return 0;
}