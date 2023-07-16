#include<iostream>

int main()
{
    int a = 10;
    int b = 12;
    auto res = a <=> b;
    if(res < 0) {
        std::cout << "a < b" << '\n';
    }
    else if(res > 0) {
        std::cout << "a > b" << '\n';
    }
    else 
    {
        std::cout << "a = b" << '\n';

    }
    return 0;
}