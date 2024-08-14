#include <iostream>
using namespace std;

// Function to perform the wave print
void wavePrint(int** arr, int nRows, int mCols) {
    for(int col = 0; col < mCols; col++) {
        if(col & 1) {
            // Bottom to top
            for(int row = nRows - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        } else {
            // Top to bottom
            for(int row = 0; row < nRows; row++) {
                cout << arr[row][col] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int nRows, mCols;

    // Input matrix dimensions
    cout << "Enter number of rows: ";
    cin >> nRows;
    cout << "Enter number of columns: ";
    cin >> mCols;

    // Dynamically allocate memory for the matrix
    int** arr = new int*[nRows];
    for(int i = 0; i < nRows; i++) {
        arr[i] = new int[mCols];
    }

    // Input matrix elements
    cout << "Enter the matrix elements:" << endl;
    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < mCols; j++) {
            cin >> arr[i][j];
        }
    }

    // Get the wave print result
    cout << "Wave Print Output:" << endl;
    wavePrint(arr, nRows, mCols);

    // Free dynamically allocated memory
    for(int i = 0; i < nRows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
