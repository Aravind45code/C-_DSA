//merge sort code
//nlogn time complexity in all the cases
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        vector<int>temp(r-l+1);
        int i=l;
        int j=m+1;
        int k=0;
        while(i<=m && j<=r){
            if(arr[i]<=arr[j])
               temp[k++]=arr[i++];
             else
              temp[k++]=arr[j++];
        }
        while(i<=m){
            temp[k++]=arr[i++];
        }
        while(j<=r){
            temp[k++]=arr[j++];
        }
        for(int i=l;i<=r;i++){
            arr[i]=temp[i-l];
            
        }
        

     }
    public:
    void mergeSort(int arr[], int l, int r){
        if(l<r){
            int mid=l+(r-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
        
        
    }
};
int main(){
  Solution s;
  int arr[5]={5,4,3,2,1};
  s.mergeSort(arr,0,4);
  for(int i=0;i<5;i++){
    cout<<arr[i];
  }
}