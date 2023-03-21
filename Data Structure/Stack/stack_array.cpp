/*Write  menu-driven program to implement stack using array with following
options:
1.Push
2.Pop
3.Display
4.Exit*/
#include<iostream>
using namespace std;
int stack[100];
int n = 100;
int top = -1;

void push()
{
    if(top>n-1)
    {
        cout<<"the stack is overflow"<<endl;
    }
    else
    {
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    top++;
    stack[top]= data;
    }     
}

void pop()
{
    if(stack ==NULL)
    {
        cout<<"the stack is empty"<<endl;
    }
    else
    {
        top--;
    }
}

void print()
{
    if(top>=0)
    {
        for(int i = top ; i>=0; i--)
        {
            cout<<stack[i]<<endl;
        }
    }
    else
    cout<<"Stack is empty"<<endl;
}

int main()
{
    cout<<"enter 1 for push"<<endl;
    cout<<"enter 2 for pop"<<endl;
    cout<<"enter 2 for display"<<endl;
    int key;
    do
    {
    cout<<"enter the key"<<endl;
    cin>>key;
    switch (key)
    {
    case 1:
    {
        push();
        break;
    }
    case 2:
    {
    pop();
    break;
    }
    case 3:
    {
        print();
        break;
    }
    default:
        break;
    }
    }
    while(key!=3);
return 0;
}
