#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int num = n;
    if(num!=0)
    {
        cout<<n<<endl;
        print(num-1);
    }
}
int main()
{
    print(10);
}