#include<iostream>
using namespace std;
template<class t1, class t2>void fun(t1 a , t2 b)
{
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
};
int main ()
{
    fun(23,45);
    return 0;
}