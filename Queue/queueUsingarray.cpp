#include<bits/stdc++.h>
using namespace std;
class Queue{
  public:
  int front,rear,capacity;
  int *queue;
  Queue(int c){
    front=rear=0;
    queue=new int[c];
    c=capacity;
  }
  void enqueue(int data){
    if(rear==capacity){
      cout<<"overflow";
      return;
    }
    else{
      queue[rear]=data;
      rear++;
    }
    return;
  }
  void dequeue(){
    if(front==rear){
      cout<<"underflow";
      return;
    }
    else{
      for(int i=0;i<rear-1;i++){
        queue[i]=queue[i+1];

      }
      rear--;
    }
    return;
  }
  void fronts(){
    if(front==rear){
      cout<<"underflow";
      return;
    }
    else{
      cout<<"front elemnt"<<queue[front];
    }
    return;
  }

};
int main(){
  Queue q(10);
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.fronts();
  q.dequeue();
  q.fronts();


}