#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    vector<int> freq;

    for (int i = 0; i < arr.size(); i++) {

        bool counted = false;

        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                counted = true;
                break;
            }
        }

        if (!counted) {
            int count = 0;

            for (int j = 0; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            freq.push_back(count);
        }
    }

    for (int i = 0; i < freq.size(); i++) {
        for (int j = i + 1; j < freq.size(); j++) {
            if (freq[i] == freq[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    vector<int> arr = {1,2,2,1,1,3};

    if (uniqueOccurrences(arr))
        cout << "True";
    else
        cout << "False";

    return 0;
}