#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*top = NULL;


void push(int data)
{
    struct node*newnode = new node;
    newnode ->data = data;
    newnode ->next = top;
    top  = newnode;  
}

void pop()
{
    if(top ==NULL)
    {
        cout<<"the stack is empty"<<endl;
    }
    else
    {
        top = top->next;
    }
}
void display()
{
    struct node * ptr = top;
    if(ptr ==NULL)
    {
        cout<<"the stack is empty"<<endl;
        
    }
    else
    {
        while(ptr!= NULL)
        {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
        }
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    display();
}
