#include<iostream>
using namespace std;
class point
{
    private:
    double x;
    double y;
    
    public:
    point(double X ,double Y)
    {
        X = x;
        Y = y;
        cout<<"point constructor of x "<<x<<endl;
        cout<<"point constructor of y "<<y<<endl;
    }
};

class rectangle 
{
    private :
    double top_left;
    double bottom_right;
    public:
    {
        rectangle(double Top_Left, double Bottom_Left)
        {
            top_left = Top_Left;
            bottom_left= Bottom_Left;
        }
        cout<<"rectangle constructor"<<top_left<<endl;
        cout<<"rectangle constructor of y"<<bottom_left<<endl;
    }
};
int main()
{
    point p1(2,5);
    
    return 0;
}