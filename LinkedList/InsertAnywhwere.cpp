#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *ptr;
};
struct node *head = NULL;
void insert(int a){
    node *temp = new node;
    temp->data=a;
    temp->ptr=head;
    head=temp;
};

void display(){
    node *p = head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    node *add=new node;
    add->data=18;
    add->ptr=NULL;
    node *p=head;
    while(p!=NULL && p->data!=20){
        p=p->ptr;
    }
    if(p==NULL){
        head=add;
    }
    else{
     //30->20->10->null
    
    add->ptr=p->ptr;
    p->ptr=add;
    }

    display();
    
    return 0;
}