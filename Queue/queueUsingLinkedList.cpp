#include<bits/stdc++.h>
using namespace std;
class QNode{
  public:
  int data;
  QNode* next;
  QNode(int d){
    data=d;
    next=NULL;
  }

};
class Queue{
  public:
  QNode* front,*rear;
  
  Queue(){
    front=rear=NULL;
  }
  void enqueue(int x){
    QNode* temp=new QNode(x);
    if(rear==NULL){
      front=rear=temp;
      return;
    }
    rear->next=temp;
    rear=temp;
  }
  void dequeue(){
    if(front==NULL){
      return;
    }
    QNode* temp=front;
    front=front->next;
    if(front==NULL){
      rear=NULL;
    }
    delete(temp);
  }
};
int main(){
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  cout<<q.front->data<<endl;
 cout<< q.rear->data<<endl;
  q.dequeue();
 cout<< q.front->data;
}