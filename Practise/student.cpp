#include <iostream>
using namespace std;
class student
{
    int rollnumber;
    float subject1, subject2, subject3;

public:
    friend void highineachsub(student a[], int s);
    friend void highesttotalmarks(student a[], int s);

    void setdata(int r, float s1, float s2, float s3)
    {
        rollnumber = r;
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
    }
    void displaydata()
    {
        cout << "The total marks obatained by roll number " << rollnumber << " is " << subject1 + subject2 + subject3 << endl;
        cout << endl;
    }
};
void highineachsub(student a[], int s)
{
    int max1 = 0, max2 = 0, max3 = 0, j1 = 0, j2 = 0, j3 = 0;
    for (int i = 0; i < s; i++)
    {
        if (max1 < a[i].subject1)
        {
            max1 = a[i].subject1;
            j1 = i;
        }
    }
   cout << "the max marks in subject1 is " << max1 << " of rollnumber " << a[j1].rollnumber << endl;
    cout << endl;
    for (int i = 0; i < s; i++)
    {
        if (max2 < a[i].subject2)
        {
            max2 = a[i].subject2;
            j2 = i;
        }
    }
    cout << "the max marks in subject2 is " << max2 << " of rollnumber " << a[j2].rollnumber << endl;
    cout << endl;

    for (int i = 0; i < s; i++)
    {
        if (max3 < a[i].subject3)
        {
            max3 = a[i].subject3;
            j3 = i;
        }
    }
    cout << "the max marks in subject3 is " << max3 << " of rollnumber " << a[j3].rollnumber << endl;
    cout << endl;
}
void highesttotalmarks(student a[], int s)
{
    int maxall = 0, jall = 0;
    for (int i = 0; i < s; i++)
    {
        if (maxall < a[i].subject1 + a[i].subject2 + a[i].subject3)
        {
            maxall = a[i].subject1 + a[i].subject2 + a[i].subject3;
            jall = i;
        }
    }
    cout << "the the total highest marks is " << maxall << " of rollnumber " << a[jall].rollnumber << endl;
    cout << endl;
}
int main()
{
    int size = 10;
    int roll;
    float ss1, ss2, ss3;
    student s[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the details of student " << i + 1 << endl;
        cin >> roll >> ss1 >> ss2 >> ss3;
        s[i].setdata(roll, ss1, ss2, ss3);
    }
    for (int i = 0; i < size; i++)
    {
        s[0].displaydata();
    }
    highineachsub(s, size);
    highesttotalmarks(s, size);
    return 0;
}
