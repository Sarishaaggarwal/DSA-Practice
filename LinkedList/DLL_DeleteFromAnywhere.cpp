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
}// 10->20->30->null
void DeleteFromAnywhere(int x){
    if(head==NULL){
        cout<<"Empty"<<endl;
    }
else{
    node *p=head;
    while(p&&p->data!=x){
        p=p->ptr;
    }
    if(p==NULL){
        cout<<"Element is not found"<<endl;
    }
    else{
        p->pre->ptr=p->ptr;
        p->ptr->pre=p->pre;
        p=NULL;
    }
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
    DeleteFromAnywhere(20);
    display();
    return 0;
}