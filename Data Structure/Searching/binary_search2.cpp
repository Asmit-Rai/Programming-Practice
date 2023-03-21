#include<iostream>
using namespace std;
int binary_search(int arr[],int l , int h, int key)
{
    int mid = (l+h)/2;
    while(l<=h)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            l=mid+1;
        }
        else if(arr[mid]>mid)
        {
            h= mid-1;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int key = 7;
    int n =sizeof(arr)/sizeof(arr[0]);
    int result = binary_search(arr,0,n-1,key);
    cout<<result<<endl;
return 0;
}