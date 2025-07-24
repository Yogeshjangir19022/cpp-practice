#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data ={1, 2, 3};
    data.push_back(100);
    std::cout<<data[data.size() - 1]<<std::endl;
    data.pop_back();
    std::cout<<data.size()<<std::endl;
    return 0;
}
