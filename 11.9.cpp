// 11.9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>


void printArray(const std::vector <int>& array)
{
    
}

int main()
{
    std::vector <int> v{ 1,2,3,4,5 };
    std::cout << v.size() << ' ' << v.capacity()<< '\n';
    v.push_back(6);

    std::cout << v.size() << ' ' << v.capacity() << '\n';
    return 0;
}
