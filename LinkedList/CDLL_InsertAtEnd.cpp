//Insert at END of CDLL
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
void insertatend(int a){
    node *temp1=new node;
    temp1->data=a;
    
    if(head==NULL)
        head=temp1;
    else{
        //40->30->20->10->5
       node *p = head;
       while(p->ptr!=head){
           p=p->ptr;
       }
      
       temp1->ptr=p->ptr;
       temp1->pre=p;
       head->pre=temp1;
       p->ptr=temp1;
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
    insertatend(5);
    display();
    return 0;
}