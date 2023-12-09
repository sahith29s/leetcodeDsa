#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int fq;
    int rear;
    int size;
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        fq = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/


    bool isEmpty() {
        // Implement the isEmpty() function
        if( fq == rear){
            return true;
        }
        else{return false;}
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){
            cout << "Queue is Full" << endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(fq == rear){
            return -1;
        }
        else{
            int ans = arr[fq];
            arr[fq] = -1;
            fq++;
            if(fq == rear){
                fq = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the fq() function
        if(fq == rear){
            return -1;
        }
        else {
            return arr[fq];
        }
    }
};
