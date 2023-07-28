#include <iostream>
#include <iomanip>

int main()
{
    double d = 12.345678;
    double e = 2011;
    double f = 1e-10;
    // 控制有效数的位数
    std::cout << std::setprecision(4) << d << '\n'
              << e << '\n'
              << f << '\n';
    // 以定点表示法写入浮点数
    std::cout << std::fixed << d << '\n'
              << e << '\n'
              << f << '\n';
    // 用科学记数法表示浮点数
    std::cout << std::scientific << d << '\n'
              << e << '\n'
              << f << '\n';

    return 0;
}