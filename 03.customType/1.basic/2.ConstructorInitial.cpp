#include<iostream>
class Person
{
public:
    int min_;
    int max_;

public:
    Person(): min_{0}, max_{1} { std::cout << "construct 1" << '\n';}
    Person(int min, int max): min_{min}, max_{max} { std::cout << "construct" << '\n';}
};

int main()
{
    Person p;
    Person p2{1,2};
    std::cout << p.min_ << p.max_ << '\n';
    std::cout << p2.min_ << p2.max_ << '\n';
    return 0;
}