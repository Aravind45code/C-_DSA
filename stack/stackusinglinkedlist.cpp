#include<bits/stdc++.h>
using namespace std;
class StackNode{
  public:
  int data;
  StackNode* next;
  StackNode(int data){
    next=NULL;
    this->data=data;
  }
};
class Stack{
  //public:
  StackNode* root;
  public:
  Stack(){
    root=NULL;
  }
  void push(int data){
    if(root==NULL){
      StackNode* newNode=new StackNode(data);
      root=newNode;
    }
    else{
      StackNode* newNode=new StackNode(data);
      StackNode* temp=root;
      root=newNode;
      newNode->next=temp;
    }
     cout<<data<<"pushed into stack"<<endl;

  }
  int isEmpty(){
    return !root;
  }
  int peek(){
    if(root==NULL){
      cout<<"Stack is empty";
      return 0;
    }
    else{
      int x=root->data;
      return x;
    }
  }
  int pop(){
    if(!root){
      return -1;
    }
    StackNode* temp=root;
    root=root->next;
    int popped=temp->data;
    free(temp);
    return popped;
  }
};
int main(){
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  cout<<s.peek()<<"is peek element"<<endl;
  cout<<s.pop()<<"popped"<<endl;
  cout<<s.peek()<<"is peek element"<<endl;

}