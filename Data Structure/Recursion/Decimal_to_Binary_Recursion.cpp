#include <bits/stdc++.h>
using namespace std;

string dtob(int n)
{
    string result = "";
    if (n >0)
    {
        if (n % 2 == 0)
        {
            result = '0' + result;
        }
        else
        {
            result = '1' + result;
        }
         result  = result + dtob(n/2);
    }
    else
    {
        return result;
    }
}
int main()
{
    cout<<dtob(2);
    return 0;
}