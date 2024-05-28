#include<bits/stdc++.h>
using namespace std;
//The first command below generates an .exe file,after running that we get the output 
//The .exe file contains the binary representation which is platform dependent
// g++ twostacksinanarray.cpp -o twostacksinanarras
// ./twostacksinanarray (running the .exe file)
class TwoStacks{
  int *arr;
  int size;
  int top1;
  int top2;
  public:
      TwoStacks(int n){
        arr=new int[n];
        top1=n/2+1;
        top2=n/2;
        size=n;

      }
      void push1(int data){
        if(top1>0){
          top1--;
          arr[top1]=data;
        }
        else{
          cout<<"stack overflow"<<endl;
          return;
        }
      }
      void push2(int data){
        if(top2<size-1){
          top2++;
          arr[top2]=data;
        }
        else{
          cout<<"stack overflow"<<endl;
          return;
        }
      }
      int pop1(){
        if(top1<=size/2){
          int x=arr[top1];
          top1++;
          return x;
        }
        else{
          cout<<"stack underflow"<<endl;
          return -1;
        }
      }
      int pop2(){
        if(top2>=size/2+1){
          int x=arr[top2];
          top2--;
          return x;
        }
        else{
          cout<<"stack underflow"<<endl;
          return -1;
        }
      }
};
int main(){
  TwoStacks ts(5);
  ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is "
         << ": " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack2 is "
         << ": " << ts.pop2() << endl;
    return 0;
}