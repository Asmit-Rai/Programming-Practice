#include<iostream>
using namespace std;

class students
{
    public:
    string university_name;
    string highest_degree;
    void get()
    {
        cout << "Enter the university name: ";
        cin >> university_name;

        cout << "Enter the highest degree received: ";
        cin >> highest_degree;
    }
    void display()
    {
        cout << "University name: " << university_name << endl;
        cout << "Highest degree: " << highest_degree << endl;
    }
};

class employee
{
    public:
    string name;
    int employee_id;
    void get()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter the employee ID: ";
        cin >> employee_id;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employee_id << endl;
    }
};

class manager : public employee
{
    public:
    string title;
    float dues;
    void get()
    {
        cout << "Enter your title: ";
        cin >> title;
        cout << "Enter the dues: ";
        cin >> dues;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Dues: " << dues << endl;
    }
};

class scientist : public employee
{
    public:
    string publication;
    void get()
    {
        cout << "Enter the publication: ";
        cin >> publication;
    }
    void display()
    {
        cout << "Publication: " << publication << endl;
    }
};

int main()
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
}