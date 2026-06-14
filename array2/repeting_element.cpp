#include<iostream>
using namespace std;
 int repetsum(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum ^ arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int result= repetsum(arr, size);
    cout<<"The repeated element is: "<<result<<endl;
        return 0;
    }