#include<vector>

class AscendingSequence
{
    std::vector<int> seq;

public:
    void insert()
    {

    }
    auto size() const // 常成员函数只能访问成员变量，不能能修改，只能调用常函数
    {
        // insert(); 不能调用非常成员方法
        return seq.size();
    }
    void threshold ()  {  } 
    void  threshold () const {  } // 可以使用 const做方法重载
};

int main()
{
    AscendingSequence seq;
    seq.insert();
    auto const& s = seq;
    // s.insert(); 常引用不能调用成员函数
    s.size(); // 使用const修饰的成员方法，可以被常引用对象调用
    return 0;
}