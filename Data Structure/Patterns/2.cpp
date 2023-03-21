#include<iostream>
using namespace std;
int main()
{
int n;
int j;
int i;
cin>>n;
while(i<=n)
{
    j=1;
    while(j<=n)
    {
        cout<<n-j+1;
        j= j+1;
    }
    cout<<i<<endl;
    i=i+1;
}
return 0;
}