#include <iostream>
#include <string>
#include <algorithm> // for std::reverse

using namespace std;

// Function to find the sum of two arrays representing numbers
string findArraySum(int a[], int n, int b[], int m) {
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    string result;

    // Add corresponding digits from both arrays
    while (i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        result += to_string(sum % 10);
        i--;
        j--;
    }

    // Add remaining digits from the first array, if any
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        result += to_string(sum % 10);
        i--;
    }

    // Add remaining digits from the second array, if any
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        result += to_string(sum % 10);
        j--;
    }

    // Add remaining carry, if any
    while (carry != 0) {
        result += to_string(carry % 10);
        carry /= 10;
    }

    // Reverse the result to get the final sum
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    int a[] = {9, 9, 5}; // Example input
    int b[] = {1,4,5};       // Example input
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    string result = findArraySum(a, n, b, m);

    cout << "Result: " << result << endl;

    return 0;
}
