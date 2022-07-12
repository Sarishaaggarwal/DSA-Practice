
//Deletes single element from head 
#include<iostream>
using namespace std;
struct node{
  int data;
  struct node *ptr;
};
struct node *head = NULL;
void insert(int a){
    struct node *temp = new node;
    temp->data=a;
    temp->ptr=head;
    head=temp;
}
void display(){
    struct node *p;
    p=head;

    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->ptr;
    }
}//1->2->3->null
void deletion(){
    node *p = head;
    if(head==NULL){
        cout<<"EMPTY"<<endl;
    }
    else{
        head=head->ptr;
        p=NULL;
    }
}
int main()
{   
    insert(3);
    insert(2);
    insert(1);
    display();
    deletion();
    deletion();   
     display();

   
}