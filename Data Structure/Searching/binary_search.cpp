#include<iostream>
using namespace std;
int binary_search(int a[], int beg , int end ,int x)
{
    int mid;
    mid = (beg+end)/2;
    if(a[mid]==x)
    {
        return mid+1;
    }
    else if (a[mid]<x)
    {
       return binary_search(a,mid+1,end,x);
    }
    else if (a[mid]>x)
    {
        return binary_search(a, mid-1,end,x);
    }
    return -1;
}
int main()
{
int a[]= {10,12,24,29,39,40,51,56,70};
int x= 70;
int n = sizeof(a)/sizeof(a[0]);
int result = binary_search(a,0,n-1,x);
cout<<result<<endl;


return 0;
}