#include <iostream>
int main()
{
    std::cout << "How Old Are You? ";
    int age;
    std::cin >> age;
    if (age < 13)
    {
        std::cout << "You are not old enough\n";
    }
    else if (age < 19)
    {
        std ::cout << "you are almost 19\n";
    }
    else
    {
        std::cout << "false";
    }

    return 0;
}
