/* #include <iostream>
using namespace std;
 int main() {
    int n, max, min;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

     return 0;
     */
    #include <iostream>
    #include <climits>
    using namespace std;
     int getMin(int arr[], int n) {
        int min = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }
    int getMax(int arr[], int n) {
        int max = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
    int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[100]; // Assuming a maximum size of 100 for simplicity
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Maximum element: " << getMax(arr, size) << endl;
    cout << "Minimum element: " << getMin(arr, size) << endl;
    return 0;
}