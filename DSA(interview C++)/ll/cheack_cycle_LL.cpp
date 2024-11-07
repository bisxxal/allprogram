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
      node* tail;
    linkedlist( ){
        this-> head = NULL;
        this-> tail = NULL;

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
            tail=ptr;
         }  
    }
void cycle (){
   head->next->next->next->next = head;
   
}
 
bool decetet(){
    if (head==NULL)
    return false ;
    map<node* , bool>viseted;
node * temp=head;
    while(temp!=NULL){
        if(viseted[temp]==true){
            return 1;
        }
        viseted [temp]=true;
        temp=temp->next;
    }return false ;
}
};
int main( ){
linkedlist list ;

list.insertatend(123);
list.insertatend(13);
list.insertatend(80);
list.insertatend(90);

list.cycle();
 
 node* head = NULL;
 
if (list.decetet()){
    cout<< "cyle is present ";
}
else 
cout<< "no cycle is present ";
return 0;
}