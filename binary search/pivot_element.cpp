#include<iostream>
#include<vector>
using namespace std;
 int pivotElement(vector<int> arr){
    int totalsum=0;
    for(int i=0;i<arr.size();i++){
        totalsum=totalsum+arr[i];
    }
    int leftsum=0;
    for(int i=0;i<arr.size();i++){
        int rightsum=totalsum-leftsum-arr[i];
        if(leftsum==rightsum){
            return i;
        }
        leftsum=leftsum+arr[i];
    }
    return -1;
 }
 int main(){
    int size;
    cout<<"enetr the size of an array: ";
    cin>>size;
    vector<int>arr(size);
    cout<<"enetr the elements of an array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int result=pivotElement(arr);
    if(result==-1){
        cout<<"no pivot element found"<<endl;
    }
    else{
        cout<<"pivot element index: "<<result<<endl;
        cout<<"pivot element: "<<arr[result]<<endl;
    }
 }