#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *ptr;
};

node *head = NULL;
//5->
void InsertAtHead(int a){
    node *temp = new node;
    temp->data=a;
    temp->ptr = temp;
    if(head==NULL){
        head=temp;
    }
    else{
        //  40->    30->20->10
        temp->ptr=head;
        node *p=head;
        while(p->ptr!=head){
            p=p->ptr;
        }
        p->ptr=temp;
        head=temp;
    }
}
void display(){
    node *p=head;
    while(p->ptr!=head){
        cout<<p->data<<endl;
        p=p->ptr;
    }
    cout<<p->data<<endl;
    
}
int main(){
    InsertAtHead(10);
    InsertAtHead(20);
    InsertAtHead(30);
    InsertAtHead(40);
    display();
}