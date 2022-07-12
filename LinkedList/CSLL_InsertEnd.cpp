#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *ptr;
};

node *head = NULL;
//
void InsertAtHead(int a){
    node *temp = new node;
    temp->data=a;
    temp->ptr = temp;
    if(head==NULL){
        head=temp;
    }
    else{
        //  40->30->20->10
        temp->ptr=head;
        node *p=head;
        while(p->ptr!=head){
            p=p->ptr;
        }
        p->ptr=temp;
        head=temp;
    }
}
//40->30->20->10   ->5
void InsertAtEnd(int a){
    node *temp1 = new node;
    temp1->data=a;
    temp1->ptr=head;
    node *p = head;
    while(p->ptr!=head){
        p=p->ptr;
    }
    p->ptr=temp1;

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
    InsertAtEnd(5);
    display();
}