#include <iostream>
using namespace std;
int main()
{
  for (int i = 0; i <=10; i++)
  {
   if (i==5)
   {
   break;
   }
   cout<<"i= "<< i <<endl;
  }
  cout<<"Loop exited because of break. "<<endl;
    return 0;
}
