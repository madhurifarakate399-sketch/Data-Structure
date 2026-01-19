#include <iostream>
using namespace std;

int main() {
    int r, c, choice;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> B[i][j];

    cout<<"operations\n";       
    cout << "1. Matrix Addition\n";
    cout << "2. Matrix Subtraction\n";
    cout << "3. Matrix Multiplication\n";
    cout << "4. Transpose of Matrix A\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            cout << "Matrix Addition (A + B):\n";
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 2:
            cout << "Matrix Subtraction (A - B):\n";
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    C[i][j] = A[i][j] - B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            cout << "Matrix Multiplication (A x B):\n";
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    C[i][j] = 0;
                    for(int k = 0; k < c; k++)
                        C[i][j] += A[i][k] * B[k][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 4:
            cout << "Transpose of Matrix A:\n";
            for(int i = 0; i < c; i++) {
                for(int j = 0; j < r; j++)
                    cout << A[j][i] << " ";
                cout << endl;
            }
            break;

        default:
            cout << "Invalid Choice";
    }
}
