#include <iostream>
using namespace std;     
class DB;         
class DM
{
private:
    float meter;
    float centimeters;

public:
    friend void addition(DM &, DB &);
    void setdm()
    {

        cout << "enter the meter and centimeters" << endl;
        cin >> meter;
        cin >> centimeters;
    }
};
class DB
{
private:
    int feet, inch;

public: 
    friend void addition(DM &,DB &);
    void setdb()
    {
        cout << "enter the inch and centimeter" << endl;
        cin >> feet;
        cin >> inch;
    }
};
void addition(DM &a, DB &b)
{
    cout<<"enter 1 for addition in meter and centimeter"<<endl;
    cout<<"enter any no for addition in feet and inch"<<endl;
    int n;
    cin >> n;
    if(n==1)
    {
        a.meter = a.meter+(b.feet*0.3048);
        a.centimeters =a.centimeters+(b.inch*2.54);
        cout<<"addition in meter and centimeter"<<a.meter<<a.centimeters<<endl;
    }
    else
    {
        b.feet = b.feet+(a.meter*3.28084);
        b.inch = b.inch+(a.centimeters* 0.393701);
        cout<<"addition in feet and centimeter"<<b.feet<<b.inch<<endl;
    }

};

 int main()
    {
        DM x;
        DB y;
        x.setdm();
        y.setdb();
        addition(x,y);   
        return 0;
        };