#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[50];
    char s2[50];
    char result[100];// [100] this is the size of the string if you want to take a small size string use less no of size
    cout<<"enter the string one"<<endl;
    cin.getline(s1, 50); // getline function is use to call the s1 and s2
    cout<<"enter the string two"<<endl;
    cin.getline(s2, 50);
    strcat(s1, s2); // use to concentrate two string 
    cout<<"the concentration of two string are    "<<s1<<endl;
    return 0;
}