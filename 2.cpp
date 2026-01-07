#include <iostream>
using namespace std;

int main() {
    int choice;
    int arr[40] = {10, 20, 30, 40, 50};
    int n = 5;   
    int i, pos, value;

    cout << "ARRAY OPERATIONS MENU\n";
    cout << "1. Traversal\n";
    cout << "2. Update\n";
    cout << "3. Insertion\n";
    cout << "4. Deletion\n";
    cout << "5. Sorting\n";
    cout << "6. Searching\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            cout << "Array elements are:\n";
            for(i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

       
        case 2:
            cout << "Enter position to update: ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> value;

            arr[pos] = value;

            cout << "Updated array:\n";
            for(i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

       
        case 3:
            cout << "Enter position to insert: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;

            for(i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;

            cout << "Array after insertion:\n";
            for(i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        
        case 4:
            cout << "Enter position to delete: ";
            cin >> pos;

            for(i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;

            cout << "Array after deletion:\n";
            for(i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

       
        case 5:
            for(i = 0; i < n - 1; i++) {
                for(int j = 0; j < n - i - 1; j++) {
                    if(arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }

            cout << "Sorted array:\n";
            for(i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        
        case 6:
            cout << "Enter element to search: ";
            cin >> value;

            for(i = 0; i < n; i++) {
                if(arr[i] == value) {
                    cout << "Element found at position " << i;
                    return 0;
                }
            }
            cout << "Element not found";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

