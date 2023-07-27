#include<string>
#include<iostream>

int main()
{
    std::string hw = "Hello";
    std::string s = hw;
    hw += " World!";
    std::cout << hw << '\n';
    std::cout << hw[4] << '\n';
    std::cout << s << '\n';
    return 0;
}