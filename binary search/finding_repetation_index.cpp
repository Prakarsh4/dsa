#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int> arr, int key){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int lastoccurence(vector<int> arr, int key){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int size;
    cout<<"eneter the size the array: ";
    cin>>size;
    vector<int> arr(size);
    cout<<"enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key to seaerch: ";
    cin>>key;
    int first=firstoccurence(arr,key);
    int last=lastoccurence(arr,key);
    if(first==-1){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"first occurence of key is at index: "<<first<<endl;
        cout<<"last occurence of key is at index: "<<last<<endl;
    }
    return 0;
}