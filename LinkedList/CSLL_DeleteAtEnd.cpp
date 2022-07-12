//Deletes the end element in CSLL
#include <iostream>
using namespace std;
struct node{
    int data;
    node *ptr;
};
node *head=NULL;
void insertathead(int a){
    node *temp=new node;
    temp->data=a;
    temp->ptr=temp;
    if(head==NULL)
        head=temp;
    else{
        temp->ptr=head;
        node *p=head;
        while(p->ptr!=head)
            p=p->ptr;
        p->ptr=temp;
        head=temp;
    }
}//40->30->20->10
void deletionatend(){
    if(head==NULL)
        cout<<"EMPTY\n";
    node *p=head,*pre;
    while(p->ptr!=head){
        pre=p;
        p=p->ptr;
    }
    if(head==p)
        head=NULL;
    else{
       
        pre->ptr=p->ptr;
        p=NULL;
    }
}
void display(){
    node *p=head;
    if(head==NULL)
        cout<<"EMPTY\n";
    while(p->ptr!=head){
        cout<<p->data<<endl;
        p=p->ptr;
    }
    cout<<p->data<<endl;
}
int main()
{
    insertathead(50);
    insertathead(40);
    insertathead(30);
    insertathead(20);
    insertathead(10);
    display();
    cout<<"After DELETION from END\n";
    deletionatend();
    deletionatend();
    deletionatend();
    display();
    return 0;
}