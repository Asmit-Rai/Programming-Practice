#include<iostream>
using namespace std;
struct node
{
    public:
    int data;
    node *next;
};

struct node* addtoempty(struct node*last , int data)
{
    if(last !=0)
    {
        return NULL;
    }

    node * temp = new node;
    temp->data = data;
    last = temp;
    last->next = last;
    return last;
}

struct node * insertatbeg(struct node*last , int data)
{
    if(last == NULL)
    {
        return addtoempty(last , data);
    }
    node * temp  = new node;
    temp->data = data;
    temp->next= last ->next;
    last->next= temp;
    last = temp;
    return last;
}

struct node* insert_at_end(struct node* last , int data)
{
    if(last==NULL)
    {
        return addtoempty(last , data);
    }
    node *temp = new node;
    temp ->data = data;
    temp->next = last->next;
    last->next = temp;
    temp = last;
    return last;
}


struct add_after_number(struct node* last , int data , int item)
{
    if(last ==NULL)
    {
        return NULL;
    }
    node * temp,*p;
    p= p->next;
    do
    {
        if(p->next ==item)
        {
            temp =new node;
            temp->data= data;
            temp->next = p->next;
            p->next = temp;
            if(p==last)
            {
                last = temp;
                return last;
            }
        }
    p= p->next;
    }
}

int main()
{
    struct node *last = NULL;
    last = addtoempty(last, 6);
    return 0;
};