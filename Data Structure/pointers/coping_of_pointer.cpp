#include<iostream>
using namespace std;
int main()
{
    int p=5;
    int q=6;
    int *q = p;
    cout<<p<<"--"<<p<<endl;
    cout<<*p<<"--"<<*q<<endl;

}