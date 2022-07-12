//delete any node 
#include <iostream>
using namespace std;
struct node{
    int data;
    node *ptr,*pre;
};

//10->20->30->40->null
//10->20->40->null

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
void deleteAnywhere(int a){
    node *p=head,*pre;
    if(head==NULL){
        cout<<"EMPTY"<<endl;
    }
    else{
        while(p&&p->data!=a){
            pre = p;
            p=p->ptr;
        }
        if(p==NULL){
         cout<<"Element not found"<<endl;
        }
        else{
            if(p==head){
                head=NULL;
            }
            //10->20->30->40->null
            
            else{
                pre->ptr=p->ptr;
              }
        }
    } 
    p=NULL;

     
}
void display(){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }
}
int main(){
    //insertathead(30);
    //insertathead(20);
    insertathead(10);
    display();
    deleteAnywhere(20);
    display();
    return 0;
}