#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    do {
        cout << i << "*" << n << "=" << i * n << endl;
        i++;
    } while(i <= 10);

    return 0;
}