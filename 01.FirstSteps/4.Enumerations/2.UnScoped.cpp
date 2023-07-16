#include<iostream>

enum day 
{
    mon, tue, wed, thu, fri, sat, sun
};

int main()
{
    day d = day::fri;
    d = day::mon;
    d = mon; // no error
    return 0;
}