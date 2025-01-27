//How to reverse the given string........
#include<iostream>
#include<string.h>
#define max_size 100
using namespace std;
int main()
{
    int i, j,length;
    char string[max_size];
    char reverse[max_size];
    cout<<"Enter the string";
    cin>>string;
    length= strlen(string);
    j=0;
    for(i=length-1;i>=0;i--)
    {
        reverse[j]=string[i];
        j++;
    }
    reverse[j]='\0';
    cout<<reverse;
}