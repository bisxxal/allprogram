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
 
node * decetet(){
 if (head==NULL)
    return NULL;
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
            return slow;
        }
    }
 return NULL;
}
node * getstatingnode(){
    if (head==NULL)
    return NULL;

   node * intersection=decetet();

    node*slow=head;
    while(slow!= intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;

}
};
int main( ){
linkedlist list ;
 
list.insertatend(123);
list.insertatend(13);
list.insertatend(80);
list.insertatend(90);

list.cycle();

if (list.decetet()!=NULL){
    cout<< "cyle is present "<<endl;
}
else {
cout<< "NO cycle is present-------- "<<endl;
}
// printing fist node of loop
cout<<"node at first loop is "<<list.getstatingnode()->data;

return 0;
}