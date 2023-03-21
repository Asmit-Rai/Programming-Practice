//write a program to calculate the factorial of the following given digit..
#include<iostream>
using namespace std;
int main ()
{
int i;
int num;
int factorial= 1;
cout<<"Enter the number";
cin>>num;

if(num<0)
{
    cout<<"The factorial of negative number is not possible"<<endl;
}
else {
        for(int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial;    
    }
cout<<"The factorial of the given number"<<num<<""<<i<<endl;
return 0;
}
