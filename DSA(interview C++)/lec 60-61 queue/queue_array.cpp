#include<bits/stdc++.h>
using namespace std;
class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue(int n) {
        size = n;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main( ){
Queue dq(5);
    
    cout << "Insert element   : 5 \n";
    dq.enqueue(5);
 
    cout << "insert element  : 10 \n";
    dq.enqueue(10);
 
    cout << "After delete   element  " <<  dq.dequeue() << endl; 
return 0;
}