#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream l ("TEXT.txt");
    if(l.is_open())
    {
        l<<"The number of lines is 5000 \n";
        l<<"Number of words \n";
        l<<"Number of Characters \n";
        l.close();
    }

    else cout<<"the file opening is going";
    return 0;
}