#include<iostream>

enum class day
{
     mon = 1, tue = 2, wed = 3, thu = 4, fri = 5, sat = 6, sun = 7
};

int main()
{
    day d = day::mon;
    std::cout << static_cast<int>(d) << '\n';
}