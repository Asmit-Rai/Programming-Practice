//Think out of the box 
// calculate the sum of number by recursion
// caluclate mean of it.

#include<bits/stdc++.h>
using namespace std;

float sum(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return arr[n-1]+ sum(arr, n-1);
    }
}

float mean(int arr[] , int n)
{
    float result = sum(arr , n);
    return result/n;

}

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The sum is"<<" "<< sum(arr, n)<<endl;
    cout<<"The Average is:"<<" "<<mean(arr, n)<<endl;
    return 0;
}