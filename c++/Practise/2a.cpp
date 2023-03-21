#include<iostream>
#include<string.h>
using namespace std;
class bankAccount
{
    string name;
    long accountno;
    string type;
    long balance;
public:
    friend void depositeamount(bankAccount &a,long amount);
    friend void withdrawafterchk(bankAccount &a,long width);
    void setaccount(string n,long an,string t,long b)
    {
        name=n;
        accountno=an;
        type=t;
        balance=b;
    }
    void displayaccount()
    {
        cout<<"The accountant name is "<<name<<endl;
        cout<<"The balance of the account is "<<balance<<endl;
    }
};

void depositeamount(bankAccount &a,long amount)
{
    a.balance=a.balance+amount;
}
void withdrawafterchk(bankAccount &a,long width)
{
    a.displayaccount();
    int R;
    cout<<"Enter 1 to withdraw or any other number to exit"<<endl;
    cin>>R;
    if(R==1)
    {
        a.balance=a.balance-width;
    }
    else
    {
        exit(0);
    }
}
using namespace std;
int main()
{
    bankAccount a1;
    a1.setaccount("aman",211414,"current",100000);
    depositeamount(a1,100000);
    withdrawafterchk(a1,100000);
    a1.displayaccount();
    return 0;
}
