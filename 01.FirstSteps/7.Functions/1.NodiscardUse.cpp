#include<iostream>

// 使用的时候如果没有返回值就提示警告
[[nodiscard]] bool prime(int i)
{
    return i > 0;
}

int main()
{
    prime(1);
    return 0;
}