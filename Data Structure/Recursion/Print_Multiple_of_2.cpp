#include<bits/stdc++.h>
using namespace std;

void mof2(int n)
{
    int num = n;
    if(num!=0)
    {
        n = n*2;
        cout<<n<<endl;
        mof2(num-1);
    }
}

int main()
{
    mof2(10);
}