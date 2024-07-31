#include <iostream>
#include <string>
using namespace std;
//CHECK IF PERMUTATION OF STRING1 IS PRESENT IN STRING2 OR NOT 
    bool checkequal(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length();
        int len2 = s2.length();
        
        // If s1 is longer than s2, no need to proceed
        if (len1 > len2) return false;

        int count1[26] = {0};
        int count2[26] = {0};

        // Fill frequency array for s1
        for (char c : s1) {
            count1[c - 'a']++;
        }

        // Initialize the sliding window with the first window size
        for (int i = 0; i < len1; i++) {
            count2[s2[i] - 'a']++;
        }

        // Check the first window
        if (checkequal(count1, count2)) {
            return true;
        }

        // Slide the window over s2
        for (int i = len1; i < len2; i++) {
            // Add the new character to the window
            count2[s2[i] - 'a']++;
            
            // Remove the old character from the window
            count2[s2[i - len1] - 'a']--;
            
            // Check if the current window matches count1
            if (checkequal(count1, count2)) {
                return true;
            }
        }

        return false;
    }


int main() {
    // Variables to hold user input
    string s1, s2;

    // Prompt user for input
    cout << "Enter the first string (s1): ";
    getline(cin, s1); // Use getline to allow spaces in the input

    cout << "Enter the second string (s2): ";
    getline(cin, s2); // Use getline to allow spaces in the input

    // Check if any permutation of s1 is a substring of s2
    bool result =checkInclusion(s1, s2);

    // Output the result
    if (result) {
        cout << "Yes, a permutation of s1 is a substring of s2." << endl;
    } else {
        cout << "No, a permutation of s1 is not a substring of s2." << endl;
    }

    return 0;
}
