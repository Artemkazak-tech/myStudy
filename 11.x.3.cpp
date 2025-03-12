// 11.x.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
void printValue(int (&arr)[4])
{
    int length{ sizeof(arr) / sizeof(arr[0]) };
    for (int i{}; i < length; ++i)
    {
        std::cout << arr[i]<< '\n';
    }
}
int main()
{

    int array[]{ 99,100,12,14 };
    printValue(array);

    return 0;
}


