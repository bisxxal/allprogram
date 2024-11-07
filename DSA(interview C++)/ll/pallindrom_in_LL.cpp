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
 
 
// node* getmiddle(){
//  if (head==NULL)
//     return NULL;
//     node*slow=head;
//     node*fast=head;

//     while( slow!=NULL&&fast!=NULL){
       
//         fast=fast->next->next;
//          slow=slow->next;
             
//         } 
//     return slow;
// }
// node* reverse(node *head){
//     node *curr=head;
//     node *prev=head;
//     node *forward=head;
// while (curr!=NULL){
//     forward=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=forward;
// }return prev;

// }
// bool ispallindrom(){
//     if (head->next==NULL)
//     return true;
// //find middle
//     node*middle= getmiddle();
//     // step==2 reverse list after middle
//     node* temp=middle->next;
//     middle->next=reverse( temp);

//     //compare both halfs
//     node*head1=head;
//     node*head2=middle->next;

//     while(head2 !=NULL){
//         if (head1->data!=head2->data){
//             return false ;
//         }
//         head1=head1->next;        
//         head2=head2->next;        

//     }
// //repert step 2
//   temp=middle->next;
//     middle->next=reverse( temp);
// return true;
// }
   node* getMid( node*head ) {
        node* slow = head;
        node* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
        node* reverse(node* head) {
        
        node* curr = head;
        node* prev = NULL;
        node* forward = NULL;
        
        while(curr != NULL) {
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    bool isPalindrome( )
    {
        if(head -> next == NULL) {
            return true;
        }
        
        //step 1 -> find Middle
        node* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        node* head1 = head;
        node* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
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
 
list.insertatend(1);
list.insertatend(2);
list.insertatend(3);
list.insertatend(3);
list.insertatend(2);
list.insertatend(1);

 list.print();
 if (list.isPalindrome()==true)
    cout<< "pallindrom"<<endl;
 else 
 cout<< " not pallindrom"<<endl;
return 0;
}