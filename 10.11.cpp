// 10.11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int* find(int* begin, int* end , int value)
{
    for (int* i{ begin }; i < end; ++i)
    {
        if (*i == value)
        {
            return i;
        }
    }
}

int main()
{
    int arr[]{ 1,2,3,4,5,6,7,8,9,10 };
    // Ищем первый элемент со значением 20.
    int* found{ find(std::begin(arr), std::end(arr), 20) };

    // Если найден элемент со значением 20, распечатываем его.
    if (found != std::end(arr))
    {
        std::cout << *found << '\n';
    }
    return 0;
}

