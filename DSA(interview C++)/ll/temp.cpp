//  ----------------------------------------LOVE BABBER __----------------------------

    
//     void insertAtTail(struct node* &head, struct node* &tail, int val) {
        
//         node* temp = new node(val);
//         //empty list
//         if(head == NULL) {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else
//         {
//             tail -> next = temp;
//             tail = temp;
//         }
//     }
    
//     struct node* add(struct node* first, struct node* second) {
//         int carry = 0;
        
//         node* ansHead = NULL;
//         node* ansTail = NULL;
        
//         while(first != NULL || second != NULL || carry != 0) {
            
//             int val1 = 0;
//             if(first != NULL)
//                 val1 = first -> data;
                
//             int val2 = 0;
//             if(second !=NULL)
//                 val2 = second -> data;
            
            
//             int sum = carry + val1 + val2;
            
//             int digit = sum%10;
            
//             //create node and add in answer Linked List
//             insertAtTail(ansHead, ansTail, digit);
            
//             carry = sum/10;
//             if(first != NULL)
//                 first = first -> next;
            
//             if(second != NULL)
//                 second = second -> next;
//         }
//         return ansHead;
//     }
//     public:
//     //Function to add two numbers represented by linked list.
//     struct node* addTwoLists(struct node* first, struct node* second)
//     {
//         //step 1 -  reverse input LL
//         first = reverse(first);
//         second = reverse(second);
        
//         //step2 - add 2 LL
//         node* ans = add(first, second);
        
//         //step 3 
//         ans = reverse(ans);
        
//         return ans;
//     }