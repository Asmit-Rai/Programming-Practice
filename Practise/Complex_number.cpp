#include<iostream>
using namespace std;
class complexno
{
    int real, imag;
    public:
    complexno()
    {
        real = 0;
        imag = 0;
    }
    complexno(int i)
    {
        real = i;
        imag = i;
    }
    complexno(int a, int b)
    {
        real = a;
        imag = b;
    }
    void add(complexno c1, complexno c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag+ c2.imag;
    }
   void display()
    {
        cout<<real<<"+"<<imag<<"i";
    }
};  
int main()
{
    int real, imag;

    cout<<"\n 1The first complex and real number are"<<endl;
    cin>>real;
    complexno c1(real);
    c1.display();

    cout<<"\n The first complex and real number are"<<endl;
    cin>>real>>imag;
    complexno c2(real, imag);
    c2.display();
    
    complexno c3;
    cout<<"\n\n Initially third complex number is - ";
    c3.display();
 
    cout<<"\n\n Storing the result of addition of first and second complex number into third...";
    c3.add(c1,c2);
 
    cout<<"\n\n Now third complex number is given by - ";
    c3.display();
 
    cout<<"\n";
 
    return 0;
}