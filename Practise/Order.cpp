#include<iostream>
using namespace std;

class Order
{
    int tableNumber;
    string serverName;
    int numberOfPatrons;
    static float minCharge;

public:
    static void displayMinCharge()
    {
        cout << "Minimal charge is " << minCharge << endl;
    }
};

// Initialize the static member variable
float Order::minCharge = 4.75;

int main()
{
    Order::displayMinCharge();
    return 0;
}