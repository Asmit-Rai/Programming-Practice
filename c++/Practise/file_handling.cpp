#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream infile("salary.txt");
     infile<<7200;
    infile.close();
    ifstream outfile("salary.txt");
    outfile>>str;
    outfile.close();
    
}
