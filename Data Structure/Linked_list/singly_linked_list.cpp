#include<iostream>
using namespace std;
struct Node
{
    public:
    int data;
    Node*next;
};

void insert_at_beg(Node** First_copy, int data)
{
    Node*new_node = new Node();
    new_node->data = data;
    new_node->next = *First_copy;
    *First_copy=new_node;
}

void insert_at_end(Node **First_copy,int data)
{
    Node*new_node = new Node();
    Node *last = *First_copy;
    new_node->data = data;
    new_node->next = NULL;
    while(last->next !=NULL)
    {
        last = last->next;
    }
    last->next= new_node;
}

void insert_at_position(Node*prev_node,int d)
{
    Node*new_node = new Node();
    new_node->data = d;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    
}

void deleteLinkedListFirstNode()
{
    Node *temporaryNode=new Node;
    temporaryNode=First;
    First=First->next;
    delete temporaryNode;
}

void print(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    
}
int main()
{
    Node*First = new Node;
    Node*Second = new Node;
    Node*Third = new Node;

    First->data = 1;
    First->next = Second;
    
    Second->data=2;
    Second->next = Third;

    Third->data = 3;
    Third->next = NULL;
    
    insert_at_beg(&First , 4);
    insert_at_end(&First,5);
    /*insert_at_position(Second->next,6);*/
    deleteLinkedListFirstNode(First);

    print(First);



}