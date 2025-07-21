#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 251;
    std ::cout << random << std::endl;}
    int main()
    {
        int choice;
        do
        {
            srand(time(NULL));
            std::cout << "0. quit \n 1.play" << std::endl;
            std::cin >> choice;
            switch (choice)
            {
            case 0:
                std::cout << "you quit the game \n";
                break;

            case 1:
                play_game();
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
            }

        }

        while (choice != 0);

        return 0;
    }
