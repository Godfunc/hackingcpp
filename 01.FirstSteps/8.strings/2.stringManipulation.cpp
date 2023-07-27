#include<string>
#include<iostream>

int main()
{
    std::string s = "I am sorry, Dave.";
    std::cout << s.insert(5, "very ") << "\n";
    std::cout << s << '\n';
    std::cout << s.erase(6, 2) << "\n";
    std::cout << s.replace(12, 5, "Frank ") << "\n";
    std::cout << s << '\n';
    s.resize(4);
    std::cout << s << '\n';


    std::string s1 = 
        "This is one literal"
        "split into several"
        "source code lines!";
    auto s2 = R"(raw "std"-string c:\users\moe)";
    return 0;

}