#include <iostream>
int main()
{
    int choice;
    do
    {
        std::cout << "0. quit \n 1.play" << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "you quit the game \n";
            break;

        case 1:
            std ::cout << "lets, play the game \n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
        }

    }

    while (choice != 0);

    return 0;
}
