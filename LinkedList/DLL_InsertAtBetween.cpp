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
}//10->20->25->30->40->null
void insertAtBtwn(int add, int x){
    node *temp=new node;
    temp->data=add;
    temp->pre=temp->ptr=NULL;
    if(head==NULL){
        cout<<"empty"<<endl;
    }
    else{
        node *p=head;
        while(p&&p->data!=x){
            p=p->ptr;
        }
        if(p==NULL){
            cout<<"element not found"<<endl;
        }
        else if(p->ptr==NULL){
            p->ptr=temp;
            temp->pre=p;
        }
        else{
            temp->pre=p;
            temp->ptr=p->ptr;
            p->ptr->pre=temp;
            p->ptr=temp;
          }
    }
}
void display(){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }//40->30->20->10->null
}
int main(){
    insertathead(40);
    insertathead(30);
    insertathead(20);
    insertathead(10);
    insertAtBtwn(25,20);


    display();
    return 0;
}