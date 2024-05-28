#include<bits/stdc++.h>
using namespace std;
class Stackq{
   queue<int>q;
   public:
   void push(int val);
   void pop();
   int top();
   bool empty();
};
void Stackq::push(int data){
  int s=q.size();
  q.push(data);
  for(int i=0;i<s;i++){
    q.push(q.front());
    q.pop();
  }
}
void Stackq::pop(){
  if(q.empty()){
    cout<<"No eleemts";
    return;
  }
  else{
    q.pop();
  }
}
bool Stackq::empty(){
  return (q.empty());
}
int  Stackq::top()
{
    return (q.empty())? -1 : q.front();
}
int main(){
  Stackq s;
s.push(10);
s.push(20);
s.push(30);
cout<<s.top()<<endl;
s.pop();
}