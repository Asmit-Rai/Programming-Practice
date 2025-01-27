#include<iostream>
using namespace std;
const double TOLL = 0.5;
class tollbooth
{
    private:
    int tot_cars;
    double tot_money;

    public:
    tollbooth():tot_cars(0), tot_money(0.0)
    {

    }
    void payingcar()
    {
        tot_cars++; tot_money += TOLL;
    } 
    void nonpaycar()
    {
        tot_cars++;
    }
    void dispalay()
    {
        cout<<"\n cars = "<<tot_cars;
        cout<<"\n money = "<<tot_money;
    }
};
int main()
{
return 0;    
}
