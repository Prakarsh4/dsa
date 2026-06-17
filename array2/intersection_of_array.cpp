#include<iostream>
using namespace std;
 void intersection(int arr1[],int arr2[], int size1, int size2){
    cout<<"the inersection of the 2 arrays is";
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }

    }
 }
 int main(){
    int size1,size2;
    cout<<"Enter the size of the first array: ";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of the second array: ";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the elements of the second array: ";
    for(int i =0;i<size2;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2,size1,size2);

    return 0;}