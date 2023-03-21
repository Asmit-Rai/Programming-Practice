#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    string s;
    ifstream i("love.txt");
    if(i.is_open())
    {
        while(getline(i,s))
        {
            cout<<s<<endl;
        }
        i.close();
    }
else{
    cout<<"file opening is fail"<<endl;

}
return 0;
}