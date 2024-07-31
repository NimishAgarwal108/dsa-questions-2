#include <iostream>
#include <vector>
#include <string>
//string compression
//ex i/p=aaaabbc
//ex o/p=a4b2c

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansindex = 0;
        int n = chars.size();
        
        while (i < n) {
            int j = i + 1;
            while (j < n && chars[i] == chars[j]) {
                j++;
            }
            chars[ansindex++] = chars[i];
            int count = j - i;
            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[ansindex++] = ch;
                }
            }
            i = j;
        }
        return ansindex;
    }
};

int main() {
    Solution solution;

    // Read input from user
    cout << "Enter the characters (no spaces, end input with Enter): ";
    string input;
    getline(cin, input); // Read the entire line of input

    // Convert string to vector<char>
    vector<char> chars(input.begin(), input.end());

    // Compress the vector
    int newLength = solution.compress(chars);

    // Output the compressed vector
    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; ++i) {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}
