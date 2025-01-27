#include<iostream>
using namespace std;
template<class t>t add(t&a,t&b)
{
    t result = a+b;
    return result;
};
int main()
{
    int i= 4;
    int j = 29;
    float x = 3.44;
    float  y = 555.33;
    cout<<"the sum of two number using template is "<<add(i,j)<<endl;
    cout<<"the addition of two float number using template is "<<add(x,y)<<endl;
    return 0;
}