#include<vector>
#include<iostream>

int main()
{
    std::vector<int> v {1,13,4,5};
    // std::vector<int> v2 (5,2); // 里面元素是 2 2 2 2 2 
    std::cout << v.size() << '\n'; // size

    std::cout << v[0] << '\n'; // get

    v[0] = 9;
    std::cout << v[0] << '\n';

    std::cout << v.front() << '\n'; // first element
    std::cout << v.back() << '\n'; // last element


    v.push_back(100); // 尾部添加元素

    v.resize(9, 0); // 设置集合的大小为9，新增元素默认值为0

    v.pop_back(); // remove last element without result
    v.clear(); // remove all elements.
    for(int item : v)
    {
        std::cout << item << " ";
    }
    return 0;
}