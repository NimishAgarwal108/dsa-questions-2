#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;

        for (char ch : s) {
            // If stack is not empty and top of stack is the same as current character
            if (!stk.empty() && stk.top() == ch) {
                stk.pop(); // Remove the adjacent duplicate
            } else {
                stk.push(ch); // Add the current character to stack
            }
        }

        // Build the result string from the stack
        string result;
        while (!stk.empty()) {
            result = stk.top() + result; // Prepend the characters
            stk.pop();
        }

        return result;
    }
};

// Example usage
int main() {
    Solution solution;

    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = solution.removeDuplicates(input);
    cout << "String after removing adjacent duplicates: " << output << endl;

    return 0;
}
