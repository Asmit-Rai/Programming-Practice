#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*top = NULL;


void push(int x)
{
    struct node*t;
    t= new node;
    if(t=NULL)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        t->data= x;
        t->next = top;
        top= t;
    }
}

int pop(int data)
{
    struct node*t;
    if(top==NULL)
    {
        cout<<"the stack is full"<<endl;
    }
    else
    {
        t= top;
        top = top->next;
        x->t->data;
        free(x);
    }

}
void display()
{
    struct node*t;
    t= top;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t= t->next;
    }
}
void isbalanced()
{
    struct node*st;
    

}

}

struct stack 
{
    char data;
    int top;
    stack*p;
}
