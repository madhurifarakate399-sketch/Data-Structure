#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 60};
    int n = 5;
    int key = 3;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at position " << i + 1;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}
