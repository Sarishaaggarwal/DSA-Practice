//INSERTION OF ELEMENT IN THE END OF DOUBLE LINKY
#include <iostream>
using namespace std;
struct node{
    int data;
    node *ptr,*pre;
};
node *head=NULL;
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
}
void insertatend(int a){
    node *p= new node;
    p->data=a;
    p->ptr=p->pre=NULL;
    if(head==NULL)
        head=p;
    else{
        node *temp=head;
        while(temp->ptr!=NULL)
            temp=temp->ptr;
        p->pre=temp;
        temp->ptr=p;
    }
}
void displayfromhead(){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }
}
int main(){
    insertathead(50);
    insertathead(45);
    insertathead(30);
    insertathead(90);
    insertatend(100000);
    displayfromhead();
    return 0;
}