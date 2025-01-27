#include<iostream>
using namespace std;

class shirt
{
    public:
    int collarsize=10;
    int sleevelength= 20;
    void displayclothingfacts()
    {
        cout<<"collorsize "<<collarsize<<endl;
        cout<<"sleevelength "<<sleevelength<<endl;
    }
};
class pants
{
    public:
    int waistsize=30;
    int inseam=40;
    void displayclothingfacts()
    {
    cout<<"waistsize"<<waistsize<<endl;
    cout<<"inseam "<<inseam<<endl;
    }

};
int main ()
{
    shirt s1;
    pants p1;
    s1.displayclothingfacts();
    p1.displayclothingfacts();
}

