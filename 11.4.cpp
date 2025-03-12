// 11.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void print(int *& value)
{
    value = nullptr;
}


int main()
{
    int value{ 5 };
    int* ptr{ &value };

    std::cout << *ptr << '\n';


    print(ptr);

    
    if (ptr)
        std::cout << *ptr;
    else
        std::cout << "It is null";
  
    return 0;
}
