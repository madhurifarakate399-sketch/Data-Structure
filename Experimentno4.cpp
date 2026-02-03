#include <iostream>
using namespace std;

int main() {
    int n, choice;
    int a[50];

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\n1. Bubble Sort";
    cout << "\n2. Selection Sort";
    cout << "\nEnter choice: ";
    cin >> choice;

    switch(choice) {

        case 1:   
            for(int i = 0; i < n - 1; i++) {
                for(int j = 0; j < n - 1 - i; j++) {
                    if(a[j] > a[j + 1]) {
                        int temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }
            cout << "Bubble Sorted Array: ";
            break;

        case 2:   
            for(int i = 0; i < n - 1; i++) {
                int min = i;
                for(int j = i + 1; j < n; j++) {
                    if(a[j] < a[min]) {
                        min = j;
                    }
                }
                int temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
            cout << "Selection Sorted Array: ";
            break;

        default:
            cout << "Invalid choice!";
            return 0;
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
