#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[50];
    char s2[50];
    char result[100];

    cout<<"Enter the first string "<<endl;
    cin.getline (s1, 50);

    cout<<"enter the second string "<<endl;
    cin.getline (s2 , 50);
    strcat(s1, s2);
    cout<<"the concentrated string are  "<<s1<<endl;
return 0;
}