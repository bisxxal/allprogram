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
   node *head2;
    public:
 
    linkedlist( ){
        this-> head = NULL;
    }
 
node* newNode(int data)
{
    node* new_node = new node(data);
    // new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void push(node** head_ref, int new_data)
{
    /* allocate node */
    node* new_node = newNode(new_data);
    /* link the old list of the new node */
    new_node->next = (*head_ref);
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
// ------------------------------ hear is code
    void insertAtTail(struct node* &head, struct node* &tail, int val) {
        
        node* temp = new node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
 node* add (node* first, node* second)
{
int carry = 0;
        node* ansHead = NULL;
        node* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;
            if(first != NULL)
                val1 = first -> data;
                
            int val2 = 0;
            if(second !=NULL)
                val2 = second -> data;
            
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
    }

 
node* reverse(node* head)
{
        node* curr = head;
        node* prev = NULL;
        node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
 
}
    struct node* addTwoLists(struct node* first, struct node* second)
    {
        //step 1 -  reverse input LL
        first = reverse(first);
        second = reverse(second);
        
        //step2 - add 2 LL
        node* ans = add (first, second);
        
        //step 3 
        ans = reverse(ans);
        
        return ans;
    }
void print (node *head){

    node *ptr=head;
    while(ptr !=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<< endl;
}
};
int main( ){
linkedlist list ;
   node* res = NULL;
    node* first = NULL;
    node* second = NULL;
list.push(&first,6);
list.push(&first,4);
list.push(&first,9);
list.push(&first,5);
list.push(&first,7);
 
  cout << "Fist list is ";
 list.print (first);

 list.push(&second, 4);
    list.push(&second, 8);
    cout << "Second list is ";
    list.print(second);

    res = list.addTwoLists(first, second);
    cout << "Resultant list is ";
    list.print (res);
return 0;
}