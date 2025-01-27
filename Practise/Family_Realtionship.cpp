#include<iostream>
using namespace std;
class mother
{
    public:
    void display()
    {
        cout<<"i am your mother"<<endl;
    }
};
class daughter : public mother
{
    public:
    void display()
    {
    cout<<"i am your daughter"<<endl;
    }
};
int main ()
{
    mother anushka;
    anushka.display();
    daughter ashi;
    ashi.display();
}