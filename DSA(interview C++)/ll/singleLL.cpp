#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node (int data){
        this -> data=data;
        this-> next= NULL;
    }

};
class linkedlist {
    node *head;
    public:
    linkedlist( ){
        this-> head = NULL;
    }
    void insertAtBeginning (int data){
         node* newnode= new node(data);
        newnode ->next=head;
        head = newnode;
    }

    void insertatend(int data){
        node* ptr= new node(data);

        if (head == NULL){
            head = ptr;
            return ;
        }
         else{
             node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;

            }
            temp->next=ptr;
            ptr->next=NULL;
         }
    }
void insertatPos(int data){
      node* ptr;
      node* temp;
      node* newnode= new node(data);
      newnode ->data=data;
       if (head == NULL){
            head = ptr;
            return ;
        }
  else {
     cout<< " enter postion "<<endl;
    int pos;cin>> pos;
    for(int i=0;i<pos;i++){
        temp=ptr;
        ptr=ptr->next;
    }
    temp=ptr->next->next;
        ptr->next=newnode;
        newnode->next=temp;

  }
}
void deleteAtBegin(){
        node *ptr=head;

        if(head==NULL){
            cout<< "linked list is empty";
        }
   else{
            head = head->next;
            delete ptr;
        }

}
void deleteAtEnd(){
   
    if(head==NULL){
            cout<< "linked list is empty";
        }
        if (head->next =NULL){
            delete head;
            head=NULL;
            return;
        }
     else{
             node*temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            
            delete temp->next;
            temp->next=NULL;
         
        }
}
void deleteAtPostion(){
     if(head==NULL){
            cout<< "linked list is empty";
        }
        if (head->next =NULL){
            delete head;
            head=NULL;
            return;
        }
else{
    node *temp=NULL;
    node *temp2=NULL;
    node *ptr=head;
    cout<< " enter postion "<<endl;
    int pos;cin>> pos;
    
    for(int i=0;i<pos;i++){

        temp=ptr;
        ptr=ptr->next;   
    }

    temp->next=ptr->next;
    delete ptr;
    printf(" deleted\n");

}
}
void print (){

    node *ptr=head;
    while(ptr !=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<< endl;
}
};
int main( ){
linkedlist list ;
list.insertAtBeginning(23);
list.insertAtBeginning(56);
list.insertAtBeginning(19);

list.insertatend(123);
list.insertatend(13);
list.insertatend(80);
list.insertatend(90);
list . print();
// list.deleteAtBegin();
// list.deleteAtEnd();
// list.deleteAtPostion();
list.insertatPos(100);
list . print();

return 0;
}