#include<iostream>
using namespace std;
class Order
{
     int tableNumber;
     string serverName;
     int numberOfPatrons;
     static float minCharge = 4.75;
 public:
      static void displayMinCharge()
      {
            cout << "Minimal charge is " << minCharge;
      }
};

int main()
{
      displayMinCharge();
      return 0;
}