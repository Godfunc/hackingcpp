#include<iostream>

constexpr int cxf(int i) { return i * 2; }
int main()
{
    int x = 0;
    int l = cxf(x);
    std::cout << l;
    return 0;
}