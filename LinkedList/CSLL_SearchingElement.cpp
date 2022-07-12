//SEARCHING AN ELE IN CIRCULAR SINGLE LL
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
}
void search(int a){
    if(head==NULL)
        cout<<"EMPTY\n";
    else{
        node *p=head;
        while(p->ptr!=head && p->data!=a)
            p=p->ptr;
        if(p->data==a)
            cout<<"Element Found\n";
        else 
            cout<<"Element not Found\n";
    }
}
int main()
{
    insertathead(50);
    insertathead(40);
    insertathead(30);
    insertathead(20);
    insertathead(10);
    search(100);
    search(40);
    return 0;
}