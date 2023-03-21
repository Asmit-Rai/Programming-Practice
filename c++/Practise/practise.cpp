#include<iostream>
#include<conio.h>
using namespace std;
inline void add(float a , float b)
{
    int c = a +  b;
    cout<<"The sum is "<<c<<endl;
}
int main ()
{
    float n1, n2;
    cout<<"enter the f1"<<endl;
    cin>>n1;
    cout<<"enter the f2"<<endl;
    cin>>n2;
    add (n1,n2);
    return 0;
}