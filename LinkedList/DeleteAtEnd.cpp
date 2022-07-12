//Deletes single element from end
//all prorams for single linkedlist
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
    node *p=head ,*pre;
    if(head==NULL){
        cout<<"EMPTY"<<endl;
    }
    else{
      while(p->ptr!=NULL){
        pre=p;
        p=p->ptr;
    }
    if(head==p){
        head=NULL;
    }
    else{
       pre->ptr=NULL ;
       
 }
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
    display();

   
}