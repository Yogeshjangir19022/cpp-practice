#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> arr={1, 2 , 3 , 4 , 5};
    cout<<"First element "<<arr[0]<<endl;
    cout<<"Second element using at ()"<<arr.at(1)<<endl;
    cout<<"size of array "<<arr.size()<<endl;
    cout <<"front element "<<arr.front()<<endl;
    cout<<"last element "<<arr.back()<<endl;
    cout<<"All element: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        cout<<arr[i]<<" ";
       

    } cout<<endl;
    
    return 0;
}
