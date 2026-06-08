/*#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[100]; // Assuming a maximum size of 100 for simplicity
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    cout << "Sum of the array elements: " << sum << endl;
    return 0;
}*/
 
#include <iostream>
using namespace std;
int findsum(int arr[],int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[100]; // Assuming a maximum size of 100 for simplicity
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int sum = findsum(arr, size);
    cout << "Sum of the array elements: " << sum << endl;
    return 0;
}
