#include<iostream>
#include<map>
using namespace std;

class node {

    public:
    int data;
    node* next;

    //constructor
    node(int data) {
        this -> data = data;
        this -> next = NULL;
    

    }

};

void insertAtHead(node* &head, int d) {

    // new node create
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(node* &tail, int d) {
     // new node create
    node* temp = new node(d);
    tail -> next = temp;
    tail  = temp;
}

void print(node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    node*node1=new node(10);
    //tail pointed to node1
    node*tail=node1;
    print(tail);
    //inserting
    insertAtTail(tail,12);
    print(tail);

     insertAtTail(tail,21);
    print(tail);
}