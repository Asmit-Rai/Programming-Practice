#include<iostream>
using namespace std;

class students
{
    public:
    int roll = 75;
    char name = 'a';
};

class exam: public students
{
    public: 
    int m1 = 45;
    int m2 = 50;
    int m3 = 90;
    int m4 = 55;
    int m5 = 77;
    int m6 = 66;
};

class result: public exam
{
    public:
    int sum = m1 + m2 + m3 + m4 + m5 + m6;
    void total_marks()
    {
        cout << "The total marks is " << sum << endl;
    }
};

int main ()
{
    result r1;
    r1.total_marks();
    return 0;
}