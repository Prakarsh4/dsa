#include<iostream>
#include<vector>
using namespace std;
int findpeak(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    vector<int> arr(size);

    cout<<"Enter elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int peakIndex = findpeak(arr);

    cout<<"Peak Index: "<<peakIndex<<endl;
    cout<<"Peak Element: "<<arr[peakIndex]<<endl;
}