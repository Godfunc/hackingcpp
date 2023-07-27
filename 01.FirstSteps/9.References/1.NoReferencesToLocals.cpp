#include<iostream>

int& square(int p)
{
    int x;
    x = p * p;
    return x;
}

int main()
{
    int y = 2;
    int& i = square(y);
    int k = i + 1;
    std::cout << k << '\n';
    return 0;
}