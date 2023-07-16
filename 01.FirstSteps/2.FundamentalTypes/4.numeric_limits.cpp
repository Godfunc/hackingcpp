#include<iostream>
#include<limits>
int main()
{
    std::cout << std::numeric_limits<double>::lowest() << '\n';
    std::cout << std::numeric_limits<double>::min() << '\n';
    std::cout << std::numeric_limits<double>::max() << '\n';
    std::cout << std::numeric_limits<double>::epsilon() << '\n'; // 最小精度
}