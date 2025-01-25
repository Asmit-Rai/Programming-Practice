#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int i,j,n;
    int temp;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(i=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                temp  = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }
    cout<<"assending order"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"arr[i]";
    }
    return 0;
}