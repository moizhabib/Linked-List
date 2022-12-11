//insert at head
//and
//printing function for linked list
#include<iostream>
using namespace std;
class node{
public:
int data;
node*next=NULL;

//constructor
node(int data){
    this->data=data;
    this->next=NULL;
}
};
void insertathead(node* &head,int data){
    node *temp =new node(data);
    temp->next=head;
    head=temp;
}
//for priinting he linked list
void print(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node*node1=new node(10);

//head pointed to node1
    node*head=node1;
    print(head);

    insertathead(head,12);
    print(head);

    insertathead(head,15);
    print(head);
    return 0;
}