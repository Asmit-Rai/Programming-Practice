#include<iostream>
using namespace std;
int linear_search(int a[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int a[]={70,40,30,11,57,41,25,14,52};
    int x = 25;
    int n = sizeof(a)/sizeof(a[0]);
    int result = linear_search(a,n,x);
    cout<<result<<endl;

return 0;
};