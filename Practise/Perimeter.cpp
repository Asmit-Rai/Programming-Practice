#include<iostream>
using namespace std;
class rectangle
{
    public:

    int length=10;
    int width = 10;
    void area(){
        int a= length*width;
        cout<<a<<endl;
    }
    void perimeter()
    {
        int p= 2*(length+width);
        cout<<p<<endl;
    }
};
int main()
{
    rectangle r1;
    r1.area();
    r1.perimeter();
}