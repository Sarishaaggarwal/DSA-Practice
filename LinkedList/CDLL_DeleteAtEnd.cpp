#include <iostream>
using namespace std;
struct node{
    int data;
    node *ptr,*pre;
};
node *head=NULL;
void insertathead(int a){
    node *temp=new node;
    temp->data=a;
    temp->ptr=temp->pre=temp;
    if(head==NULL)
        head=temp;
    else{
        temp->ptr=head;
        temp->pre=head->pre;
        head->pre=temp;
        temp->pre->ptr=temp;
        head=temp;
    }
}
void deletionatend(){
    if(head==NULL)
        cout<<"EMPTY\n";
    else{//40->30->20->10
    node *p=head;
        if(head->ptr==head)
            head=NULL;
        else{
            node *p = head;
            while(p->ptr!=head){
                p=p->ptr;
            }
            p->pre->ptr=p->ptr;
            head->pre=p->pre;
        }
        p=NULL;
    }
}
void display(){
    node *p=head;
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
    cout<<"After Deletion\n";
    deletionatend();
    deletionatend();
    display();
    return 0;
}