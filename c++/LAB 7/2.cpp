#include<iostream>
using namespace std;
class students
{
    public:
    string university_name;
    string higest_degree;
    void get()
    {
        cout<<"enter the university name ";
        cin>>university_name;

        cout <<"enter the higest degree recived"<<endl;
        cin>>higest_degree;
    }
    void display()
    {
        cout<<"university name "<<university_name<<endl;
        cout<<"higest degree "<<higest_degree<<endl;
    }
};
class employee
{
    public:
    string name;
    int employ_id;
    void get()
    {
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter the employee id"<<endl;
    cin>>employ_id;
    }
    void display()
    {
    cout<<"name "<<name<<endl;
    cout<<"employee id "<<employ_id<<endl;
    }
};
class manager : public employee
{
    public:
    string title;
    float dues;
    void get()
    {
    cout<<"enter your title"<<endl;
    cin>>title;
    cout<<"enter the dues"<<endl;
    cin>>dues;
    }
    void display()
    {
    cout<<"titl;e is "<<title<<endl;
    cout<<"dues is "<<dues<<endl;
    }

};
class scientist : public employee
{
    public :
    string publication;
      void get()
    {
    cout<<"enter the publication"<<endl;
    cin>>publication;
    }
    void display()
    {
    cout<<"publication"<<publication<<endl;
    
    }

};

int main ()

{
    students s1;
    employee e;
    manager m;
    scientist s;

    s1.get();
    e.get();
    m.get();
    s.get();
    s1.display(); 
    e.display(); 
    m.display();
    s.display();

    return 0;
};