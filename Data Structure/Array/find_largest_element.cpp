#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int n;
    int arr[100];
    cout<<"size of the array"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=n;i++)
    {
        if (arr[0]<arr[i])
        {
           arr[0]=arr[i];
        }   
    }
    cout<<"the largest of the array is "<<arr[i]<<endl;
    return 0;
}