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
 
 void insertatend(int data){
        node* ptr= new node(data);
 node* tail=NULL;
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
void cycle (){
   head->next->next->next->next = head;
   
}
 
int decetet(){
 if (head==NULL)
    return 0;
    node*slow=head;
    node*fast=head;

    while( slow!=NULL&&fast!=NULL){
       
        fast=fast->next;

        if (fast!=NULL){
            fast=fast->next;
        }
         slow=slow->next;
        if(fast==slow){
        cout<<"loop is present at "<<slow->data<<endl;
            return 1;
        }
    }
 return 0;
}
};
int main( ){
linkedlist list ;
 
list.insertatend(123);
list.insertatend(13);
list.insertatend(80);
list.insertatend(90);

list.cycle();

if (list.decetet()==1){
    cout<< "cyle is present ";
}
else 
cout<< "NO cycle is present-------- ";
return 0;
}