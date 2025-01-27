#include<iostream>
using namespace std;
template<class t>void fun(t a)
{
    cout<<"the value of  a is"<<a<<endl;
}
template<class t, class t2>void fun(t b , t2 c)
{
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
}
int main()
{
    fun(45);
    fun(33,56);
    return 0;
}