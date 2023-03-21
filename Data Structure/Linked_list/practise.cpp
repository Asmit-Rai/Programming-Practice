#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
};

void transverse(node * t)
{
    while(t != NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}

void insert_at_beg(node** head_copy, int d)
{
    node*one= new node();
    one ->data = d;
    one->next = (*head_copy);
    (*head_copy)=one;
}

void insert_at_position(node *prev_node,int d)
{
    if(prev_node ==NULL)
    {
        cout<<"it is the last node hence no node cannot be added"<<endl;
    }
    node*new_node= new node();
    new_node->data = d;
    new_node->next = prev_node->next;
    prev_node-> next = new_node;
}


void insert_at_end(node** head_copy, int d)
{
    node*last= *head_copy;
    node*new_node = new node();
    new_node->data= d;
    new_node->next= NULL;
    if(*head_copy ==NULL)
    {
        *head_copy=new_node;
        return;
    }
    while(last->next != NULL)
    {
        last= last->next;
    }
    last->next = new_node;
    return ;
}


int main()
{
    node * head = NULL;
    node * second = NULL;
    node * third = NULL;

    head = new node;
    second = new node;
    third = new node;

    head->data = 1;
    head-> next = second;

    second -> data = 2;
    second -> next = third;

    third-> data = 3;
    third -> next = NULL;

    /*cout<< head->data<<endl;
    cout<<second->data<<endl;
    cout<<third->data<<endl;

    cout<<second->next<<endl;

    cout<<third->next<<endl*/


    insert_at_beg(&head,4);
    insert_at_position(head->next,5);
    insert_at_end(&head,6);
    transverse(head);



return 0;
}