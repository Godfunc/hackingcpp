#include<iostream>
#include<vector>


int main()
{
    std::vector<int> v1 {1,3,4,5};
    std::vector<int> v2 = v1; // 深度分配，深度拷贝，v2会创建一个新的对象，拷贝v1的所有元素
    if (v1 == v2) // 深度比较，比较每个元素
    {
        std::cout << "equal\n";
    }
    v1[0] = 9;
    
    for(int item : v1)
    {
        std::cout << item << " ";
    }
    std::cout << '\n';
    for(int item : v2)
    {
        std::cout << item << " ";
    }
}