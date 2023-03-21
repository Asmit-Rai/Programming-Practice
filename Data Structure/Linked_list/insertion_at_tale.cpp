#include<iostream>
using namespace std;
  class node
    {
        public:
        int data;
        node*next;


    //constructor

    node(int data)
    {
        this->data= data;
        this->next =NULL;
    }
    };

    void insertattail(node* &tail,int d)
    {
        node*temp = new node(d);
        tail->next = temp;
        tail = tail->next;
    }

    void print1(node* &tail)
    {
        node*temp = tail;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp= temp->next;
        }
        cout<<endl;

    }
    void insert_at_mid(node &head,int position, int d)
    {
        node* temp= head;
        int cnt = 1;
        while(cnt<postion-1)
        {
            temp = temp->next;
            cnt++
        }
    }
int main()
{
    node* node1 = new node(10);

    node* tail = node1;
    insertattail(tail,12);
    print1(tail);
    insertattail(tail,15);
    print1(tail);

}