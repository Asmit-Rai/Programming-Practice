#include<iostream>
using namespace std;
class staff
{
    public:
 string codename;
  void get()
 {
    cout<<" Enter the code name"<<endl;
    cin>>codename;
 }
 void display()
 {
     cout<<"code name "<<codename;
 }
};


class teacher : public staff
{
    public:
string codename;
string subject_publication;
  void get()
 {
    cout<<" Enter the subject publication"<<endl;
    cin>>subject_publication;
 }
 void display()
 {
     cout<<"subject publication "<<subject_publication;
 }
};


class typist : public staff 
{
    public:
int speed;
  void get()
 {
    cout<<" Enter the speed"<<endl;
    cin>>speed;
 }
 void display()
 {
     cout<<"speed is "<<speed;
 }
};


class officer : public staff 
{
    public:
int grades;
  void get()
 {
    cout<<" Enter the grades"<<endl;
    cin>>grades;
 }
 void display()
 {
     cout<<"grades "<<grades;
 }
};


class regular : public typist
{
    public:
string codename;

};


class casual : public typist
{
    public:
string daily_wages;
  void get()
 {
    cout<<" Enter the daily wages"<<endl;
    cin>>daily_wages;
 }
 void display()
 {
     cout<<"daily wages "<<daily_wages;
 }
};
int main ()
{
    staff s1;
    teacher t1;
    typist t2;
    officer o1;
    regular r1;
    casual c1;
    s1.get();
    t1.get();
    t2.get();
    o1.get();
    r1.get();
    c1.get();
    s1.display();
    t1.display();
    t2.display();
    o1.display();
    r1.display();
    c1.display();
return 0;
}