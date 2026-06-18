#include<iostream>
using namespace std;
 void count(int arr[], int size){
    int zerocount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
    }
  for(int i=0;i<zerocount;i++){
    arr[i]=0;
  }
   for(int i=zerocount;i<size;i++){
    arr[i]=1;
  }

 }
 int main(){
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"enetr the elements of an array :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    count(arr, size);
    cout<<"the array after counting the zeros is :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }