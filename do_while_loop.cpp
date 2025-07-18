#include <iostream>
#include <string>
using namespace std;
int main()
{
  std :: string password = "Hello123";
  std::string guess ;
 do
 {
   std::cout<<"Guess the password: ";
   std::cin >>guess;
 } while (guess != password);
 
  
    return 0;
}
