#include<iostream>
using namespace std;
int main()
{
    int x ;
    int y;
    int sum = 1;
    int i;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<"enter the value of y"<<endl;
    cin>>y;
    for(i=0;i<y;i++)
    {
        sum = sum*x;
    }
    cout<<sum;
}