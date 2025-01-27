#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string [10];
    cout<<"Enter the string"<<endl;
    cin.getline(string , 10);
    cout<<"string in lower case will be  "<<strlwr(string);
    return 0;
}