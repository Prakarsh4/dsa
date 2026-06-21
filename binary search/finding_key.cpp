#include<iostream>
using namespace std;
 int binary(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid= start+(end-start)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        else{
            end=mid-1;
        }

    }
    return -1; // Key not found
 }
 int main(){
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key to be found: ";
    cin>>key;
    int result= binary(arr,size,key);
    if(result!=-1){
        cout<<"Key found at index: "<<result<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

 }