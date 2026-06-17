#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    unordered_set<int> seen;

    for (auto it : freq) {
        if (seen.count(it.second)) {
            return false;
        }
        seen.insert(it.second);
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