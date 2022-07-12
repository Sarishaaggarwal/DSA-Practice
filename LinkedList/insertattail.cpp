#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *ptr;
};
struct node *head=NULL; 
//10->20->30->null
void insert(int a){
    node *temp=new node;
    temp->data=a;
    temp->ptr=NULL;
    head->ptr=temp;
    head=temp;
    
}
//65->55->45->null
void display(){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }
}
void insertend(int a){
    node *add=new node;
    add->data=a;
    add->ptr=NULL;
    
    node *temp=head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;
    }
    temp->ptr=add;
}
int main()
{    
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    
    display();
}