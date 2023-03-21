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

    // insertion at head function
    void insertathead(node* &head,int d)
    {
        // data comes then the new node will create
        node* temp = new node(d);
        temp->next=head;
        head = temp;
    }

    //printing the values
    void print(node* &head)
    {
        node*temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp= temp->next;
        }
        cout<<endl;

    }
int main()
{
    //created a new node
    node* node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head pointed to node1
    node *head = node1;
    print(head);
    insertathead(head, 12);
    print(head);
    insertathead(head, 15);
    print(head);
}