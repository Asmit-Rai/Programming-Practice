#include<iostream>
using namespace std;
int main()
{
    int num;
    int temp;
    int count = 0;
    cout<<"Enter the Number";
    cin>>num;
    temp= num;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }

cout<<"The number of digit is"<<count<<endl;
return 0;
}