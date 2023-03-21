// ............ to crate a node 1 in linked list..........
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;

    // creating a construct to put a value in the node
    node(int data)
    {
        this->data=data;
        this->next=next;
    }
};
int main()
{
    node *node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
return 0;
}