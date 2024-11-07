#include<bits/stdc++.h>
using namespace std;
class Deque{
        int *arr ,size,front,rear;
    public:
    Deque(int n){
        size=n;
       arr = new int[n];
       rear=front =-1;
    }
    void pushfront(int n){
        if (isFull()){
        cout<< "Queue is full"<<endl;
        return ;
        }

        if (isEmpty()){ ///if one element is there
            front =rear = -1;
        }
        else if(front == 0 && rear != size-1) {
            front = size-1;
    }
    else
    front --;
     // push element 
     arr[front ]=n;
    }


void pushback(int n){
    if (isFull()){
        cout<< "Queue is full"<<endl;
        return ;
        }
  else if(isEmpty()) {
            front  = rear = 0;
        }
        else if (rear = size-1 && front != 0){
            rear =0;

        }
        else
        rear ++;

        arr[rear] = n;
}


int popfront (){
    if(isEmpty())
    {
        cout<< "Queue is empty ";
        return -1;
    }
 int ans = arr[front];
        arr[front] = -1;

    if (front == rear)
    front = rear =-1;

    if ( front =size -1 )
    front =0;

    else
    front ++;

    return ans;
}


int  popback(){
     if(isEmpty())
    {
        cout<< "Queue is empty ";
        return -1;
    }
     int ans = arr[rear];
        arr[rear] = -1;
    
      if(front == rear) { //single element is present
            front = rear = -1;
        }
         else if(rear == 0) {
            rear = size-1; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear--;
        }
        return ans;
}
   bool isEmpty()
    {
        if(front == -1)
            return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
		if( (front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1) ) ) {
            return true;
        }
        else
        {
            return false;
        }
    }

    int  getFront()
{
    // check whether Deque is empty or not
    if (isEmpty()) {
        cout << " Underflow\n" << endl;
        return -1;
    }
    return arr[front];
}
 
// function return rear element of Deque
int  getRear()
{
    // check whether Deque is empty or not
    if (isEmpty() || rear < 0) {
        cout << " Underflow\n" << endl;
        return -1;
    }
    return arr[rear];
}
};
int main( ){
Deque dq(5);
   
      // Function calls
    cout << "Insert element at rear end  : 5 \n";
    dq.pushback(5);
 
    cout << "insert element at rear end : 10 \n";
    dq.pushback(10);
 
    cout << "get rear element "
         << " " << dq.getRear() << endl;
 
    dq.popback();
    cout << "After delete rear element new rear"
         << " become " << dq.getRear() << endl;
 
    cout << "inserting element at front end \n";
    dq.pushfront(15);
 
    cout << "get front element "
         << " " << dq.getFront() << endl;
 
    dq.popfront();
 
    cout << "After delete front element new "
         << "front become " << dq.getFront() << endl;
return 0;
}