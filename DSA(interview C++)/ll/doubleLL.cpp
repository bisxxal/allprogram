#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node (int data){
        this -> data=data;
        this-> next= NULL;
        this-> prev= NULL;
    }

};
class doubly{
    public:
    node * head, *tail;

    doubly( ){
        this->head=NULL;
    }
    void insertAtBegin(int data){
        node* newnode=new node(data);
         
        if (head==NULL){
            head=newnode;
            tail=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
        }
        else {
          newnode->prev=NULL;  
       newnode->next = head;  
       head->prev=newnode;  
       head=newnode;
        
        }
    }
    void insertAtend(int data){
        node* newnode=new node(data);
         
        if (head==NULL){
            head=newnode;
            tail=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
        }
        else{
            tail->next=newnode;
            newnode->next=NULL;
            tail=newnode;
        }
    }
void insertAtPos(int data){
        node* newnode=new node(data);
         node* ptr=head;
         node *last;
        if (head==NULL){
            head=newnode;
            tail=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
        }
        else{
            cout<< " enter pos";
            int pos;cin>>pos;
            for(int i=2;i<=pos;i++){
                 
                ptr=ptr->next;
            }
            
            last=ptr->next ;
            ptr->next = newnode;
            newnode->prev=ptr;
            newnode->next=last;

     
        }
    }
void print(){
    if (head==NULL){
    cout<<"empty  linked list";
    return;}
    node *ptr=head;
        while (ptr !=NULL){
            cout<< ptr->data<< " ";
            ptr=ptr->next;

        }cout<< endl;
}
};

int main(){
    doubly list;
   list . insertAtBegin(34); 
   list . insertAtBegin(45);
   list . insertAtBegin(45);
   list . insertAtBegin(45);
   list . insertAtBegin(45);
   list . insertAtBegin(45);
   list . insertAtend(567);
   list . insertAtend(78);
   list . insertAtend(5 );
   list . insertAtend( 67);
   list . insertAtend(97);

   list.print();
   list . insertAtPos(123);
   list.print();
}