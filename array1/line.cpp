#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;   // index return karega
        }
    }
    return -1;   // element nahi mila
}

int main() {
    int size;
    cout<< "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout<< "Enter the elements of the array: ";

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;
    cout << "Enter the element to search: " << key << endl;
    int result = linearSearch(arr, size, key);

    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;

    return 0;
}