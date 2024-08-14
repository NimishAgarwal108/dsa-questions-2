vector<vector<long long int>> printPascal(int n) {
    //pascals triangle leetcode-->118 
    vector<vector<long long int>> ans;

    for (int i = 0; i < n; ++i) {
        vector<long long int> row(i + 1, 1); // Initialize row with 1s

        for (int j = 1; j < i; j++) {
            row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }

        ans.push_back(row); // Add the row to the result
    }

    return ans;      
}
