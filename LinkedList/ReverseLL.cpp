#include<iostream>
using namespace std;
struct node{
    int data;
    node *ptr;
};
struct node *head =NULL;
//10->20->30->1
void insert(int a){
    node *temp=new node;
    temp->data=a;
    temp->ptr=head;
    head=temp;
}

void reverselinkedlist(){
   
    node *prev=NULL;
    node *curr=head;
    node *next;
    while(curr!=NULL){
        next=curr->ptr;
        curr->ptr=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    
}

void display(){
    node *p = head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }
}//10->20->30->1

int main(){
    insert(1);
    insert(30);
    insert(20);
    insert(10);
    display();
    cout<<"AFTER REVERSAL"<<endl;
    reverselinkedlist();
    display();
}
