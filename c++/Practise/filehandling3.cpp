#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[75];
    ofstream os;
    os.open("question.txt");
    cout<<"What is your name??"<<endl;
    cin.getline(input,100);
    os<<input<<endl;

    cout<<"Do you have any boyfriend??"<<endl;
    cin>>input;
    os<<input<<endl;
    os.close();

    ifstream is;
    string line;
    is.open("question.txt");
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;

}