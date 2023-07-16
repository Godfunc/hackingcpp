#include<iostream>

enum class day 
{
    mon, tue, wed, thu, fri, sat, sun
};

int main()
{
    day d = day::fri;
    d = day::mon;
    // d = mon; error
    return 0;
}