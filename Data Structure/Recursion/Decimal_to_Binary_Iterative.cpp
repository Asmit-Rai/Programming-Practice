#include<bits/stdc++.h>
using namespace std;

string dtob(int n)
{
    string result = "";
    int number = n;
    while(number>0)
    {
        if(number%2==0)
        {
       
            result = '0'+result;
        }
        else
        {
            result = '1'+result;
        }
        number = number/2;
    }
    return "Decimal Number:" + to_string(n)+"\n"+"Binary Number:"+ result;
}
int main()
{
    cout<<dtob(4)<<endl;
    return 0;
}