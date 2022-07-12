#include <iostream>
using namespace std;
struct node{
    int data;
    node *ptr,*pre;
};

struct node *head=NULL;
void insertathead(int a){
    node *p=new node;
    p->data=a;
    p->pre=p->ptr=NULL;
    if(head==NULL){
        head=p;
    }
    else{
        head->pre=p;
        p->ptr=head;
        head=p;
    }
}// 30->null
void DeleteFromHead(){
    if(head==NULL){
        cout<<"Empty"<<endl;
}
else{
    node *p = head;
    head=head->ptr;
    if(head!=NULL){
        head->pre=NULL;
    }
    p=NULL;
}
}

void display(){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }
}  
int main(){
    insertathead(40);
    insertathead(30);
    insertathead(20);
    insertathead(10);
    display();
    DeleteFromHead();
    

    display();
    return 0;
}