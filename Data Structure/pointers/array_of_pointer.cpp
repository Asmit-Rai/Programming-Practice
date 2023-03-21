#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,4,6,8};
    cout<<arr<<endl;//  returns the address of the array
    cout<<arr[0]<<endl;// returns the address of the particular index
    cout<<&arr[0]<<endl;// return the value at the particular index
    cout<<*arr<<endl;// return the value of the first memeory
    cout<<*arr+1<<endl;// returns the value next to the first memory
    
}