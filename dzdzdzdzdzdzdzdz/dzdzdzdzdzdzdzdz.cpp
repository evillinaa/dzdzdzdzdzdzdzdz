#include <iostream>

void func1() 
{
    std::cout << "Функция 1 вызвана!" << "\n";
}

void func2() 
{
    std::cout << "Функция 2 вызвана!" << "\n";
}

void func3() 
{
    std::cout << "Функция 3 вызвана!" << "\n";
}

int main() 
{

    void (*func_ptrs[3])() = { func1, func2, func3 };


    for (int i = 0; i < 3; ++i) 
    {
        (*func_ptrs[i])();
    }

    return 0;
}
