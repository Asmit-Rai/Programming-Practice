#include<iostream>
using namespace std;
template<class t>
class a
{
    public:
    t num1 = 12;
    t num2 = 34;
    void add()
    {
        cout<<"addition of two number is "<<num1+num2<<endl;
    }
};
int main ()
{
    a<int>d;
    d.add();
    return 0;
}