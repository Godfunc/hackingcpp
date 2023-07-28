class MyInt {
public:
    int value;

    // 有参构造函数，可以用于隐式类型转换
    MyInt(int val) : value(val) {}

    // 显式使用 explicit 关键字，禁止隐式类型转换
    explicit MyInt(double val) : value(static_cast<int>(val)) {}
};

int main() {
    MyInt a = 5; // 允许，调用 MyInt(int val) 构造函数，隐式类型转换
    MyInt b(3.14); // 错误！禁止隐式类型转换，需要显式调用构造函数

    return 0;
}
