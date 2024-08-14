#include <iostream>
//striver sheet problem sde
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> nextPermutation(vector<int> &nums, int n) {
    vector<int> ans = nums;
    int bp = -1; // Initialize bp to -1

    // Step 1: Find the rightmost index bp where nums[bp] < nums[bp + 1]
    for (int i = n - 1; i > 0; --i) {
        if (nums[i] > nums[i - 1]) {
            bp = i - 1;
            break;
        }
    }

    // If no such index exists, the permutation is the last permutation
    if (bp == -1) {
        sort(ans.begin(), ans.end());
    } else {
        // Step 2: Find the smallest element greater than nums[bp] to swap with
        int minDiff = INT_MAX;
        int toSwapIndex = bp + 1;
        for (int j = bp + 1; j < n; ++j) {
            if (nums[j] > nums[bp] && nums[j] - nums[bp] < minDiff) {
                minDiff = nums[j] - nums[bp];
                toSwapIndex = j;
            }
        }

        // Swap elements at indices bp and toSwapIndex
        swap(ans[bp], ans[toSwapIndex]);

        // Step 3: Sort the subarray from bp + 1 to end
        sort(ans.begin() + bp + 1, ans.end());
    }

    return ans;
}

int main() {
    // Example vector
    vector<int> nums = {1, 3,2}; 
    int n = nums.size();

    // Display original vector
    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Get the next permutation
    vector<int> next_perm = nextPermutation(nums, n);

    // Display the next permutation
    cout << "Next permutation: ";
    for (int num : next_perm) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
