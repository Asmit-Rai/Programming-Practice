#include<iostream>
using namespace std;
int bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[j]<a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
    }

}
int print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
    int a[]={5,66,33,62,81,54,75};
    int n = sizeof(a)/sizeof(a[0]);
    bubblesort(a,n);
    print(a,n);
return 0;
}
