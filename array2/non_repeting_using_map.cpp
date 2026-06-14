#include<iostream>
#include <unordered_map>
using namespace std;
void count(int arr[], int size){
    unordered_map<int, int> mp; 
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
      cout << "Non Repeating elements are: ";

    for(int i = 0; i < size; i++) {
        if(mp[arr[i]] == 1) {
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int size;
    cout<<"enetr the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    count(arr, size);
    return 0;
}
