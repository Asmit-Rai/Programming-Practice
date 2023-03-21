#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    int a = num;
    a++;
    cout<<num<<endl;

    int *p= &num;
    cout<<"before"<<num<<endl;
    (*p)++;
    cout<<num<<endl;
}