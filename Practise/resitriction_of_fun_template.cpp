#include<iostream>
using namespace std;
void fun(double a)
{
    cout<<"value of a"<<a<<endl;
}
void fun(int b)
{
    if(b%2==0)
    {
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}
int main()
{
    fun(3434);
    fun(45);
}