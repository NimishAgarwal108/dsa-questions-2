#include <iostream>
using namespace std;
//leetcode 1752
// Function to check if the array is a rotated sorted array
bool check(int nums[], int n) {
    
    int count = 0;
    
    for (int i = 1; i < n; i++) {
        if (nums[i-1] > nums[i]) {
            count++;
        }
    }
    
    // If there's more than one decrease, it's not a rotated sorted array
    if (nums[n-1] > nums[0]) {
        count++;
    }
    
    return count <= 1;
}

// Function to print the array
void print(int ans[], int s) {
    for (int i = 0; i < s; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size" << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (check(arr, n)) {
        cout << "The array is a rotated sorted array." << endl;
    } else {
        cout << "The array is NOT a rotated sorted array." << endl;
    }

    print(arr, n);
    return 0;
}