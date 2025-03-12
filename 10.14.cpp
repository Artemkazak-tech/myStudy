// 10.14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <limits>


void printSortNames(std::string* ptr, std::size_t length)
{
    for (std::size_t i{}; i < length; i++)
    {
        std::cout << '\n';
        std::cout << "Name #" << i + 1 << ptr[i];
    }
}
int main()
{
    std::size_t length{};
    std::cout << "Enter a number:";
    std::cin >> length;
    auto* ptr{ new std::string [length] };
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i{0}; i < length; i++)
    {
        
        std::cout << "Enter name #" << i+1 << " : ";
        std::getline(std::cin, ptr[i]);
    }

    std::sort(ptr, ptr + length);

    printSortNames(ptr, length);
    delete[] ptr;


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
