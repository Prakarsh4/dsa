/*#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin>>size;
    int arr[100];
    cout<<"enter the elements of the array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr, arr + size);
    cout << "Reversed array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}*/
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}