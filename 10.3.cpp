﻿// 10.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iterator>

int main()
{
    constexpr int array[]{ 1,2,3,4,5,6,7,8,9 };
    int length{ std::size(array) };

    bool value{ true };

    int index{};
    while (value)
    {
        int a{};
        std::cout << "Enter please a value: ";
        std::cin >> a;

        if (a == 1 || a == 2 || a == 3 || a == 4 || a == 5
            || a == 6 || a == 7 || a == 8 || a == 9)
        {
            value = false;
            index = a;
            break;

            

        }
       
    }
    


    for (int i{}; i < length; i++)
    {
        std::cout << array[i] << '\t';

    }

    std::cout << '\n';
    
    for (int i{}; i < length; i++)
    {
        if (array[i] == index)
        {
            std::cout << "The number " << index << " has such index " << i;
        }

    }

   


    
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
