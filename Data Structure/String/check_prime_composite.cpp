#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if (n%1==0 && n%2!=0)
    {
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"composite number"<<endl;
    }
    return 0;
}