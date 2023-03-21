#include<iostream>
using namespace std;
int main ()
{
    int array[100];
    int i=0;
    int n,x;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the element x";
    cin>>x;
    for(i=0;i<=n;i++)
    {
        cin>>array[i];
    }
    for(i=0; i<=n; i++)
    {
        if(array[i]==x)
        {
            cout<<"the element is at"<<i+1<<"position"<<endl;
        }
    else
    {
        cout<<"the element is not in the array"<<endl;
    }
    }
    return 0;

}