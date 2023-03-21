#include <iostream>  
using namespace std;  
class shape
{
    public :
    virtual void draw() = 0;
};
class rectangle : public shape
{
    public :
    void draw()
    {
        cout<<"drawing rectangle"<<endl;
    }
};
class circle : public rectangle
{
    public :
    void draw ()
    {
        cout<<"drawing circle"<<endl;
    }
};
int main()
{
    rectangle rect;
    circle circ;
    circ.draw();
    rect.draw();
};