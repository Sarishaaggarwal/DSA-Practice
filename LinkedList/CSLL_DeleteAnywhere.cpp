//Deletes the any element in CSLL
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
void deletionanywhere(int x){
    if(head==NULL)
        cout<<"EMPTY\n";
    node *p=head,*pre;
    while(p&&p->data!=x){
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
    insertathead(10);
    insertathead(20);
    insertathead(30);
    insertathead(40);
    display();
    cout<<"After DELETION from ANYWHERE\n";
    deletionanywhere(20);
    display();
    return 0;
}