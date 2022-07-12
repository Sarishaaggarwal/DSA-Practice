//Insert at ANY POSITION of CDLL
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
void insertanywhere(int add,int x){
    node *temp1=new node;
    temp1->data=add;
    temp1->ptr=NULL;
    if(head==NULL)
        head=temp1;
    else{
        node *p=head;
        while(p&&p->data!=x){
            //40->30->25->20->10
            p=p->ptr;
        }
        temp1->ptr=p->ptr;
        p->ptr->pre=temp1;
        temp1->pre=p;
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
    insertanywhere(25,30);
    display();
    return 0;
}