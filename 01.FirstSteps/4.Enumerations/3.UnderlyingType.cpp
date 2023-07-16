#include<iostream>

// 前提：必须是数子类型
// 7个值用 char类型足够了
enum class day : char
{
    mon, tue, wed, thu, fri, sat, sun
};

enum class language_ISO639: short
{
    abk, arr, afr, aka, amh, ara, arg //, ...
};

int main()
{
    day d = day::mon;

    language_ISO639 l = language_ISO639::abk;
    return 0;
}