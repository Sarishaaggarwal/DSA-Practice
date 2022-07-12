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
}
void display(){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }//40->30->20->10->null
}
int main(){
    insertathead(10);
    insertathead(20);
    insertathead(30);
    insertathead(40);

    display();
    return 0;
}