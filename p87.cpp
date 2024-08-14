class Solution {
public:
    //set zeroes in matrix leetcode 73
    void setZeroes(vector<vector<int>>& matrix) {
	int n=matrix.size();
	int m=matrix[0].size();

	vector<int>x,y;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
                  if (matrix[i][j] == 0) {
                    x.push_back(i);
                    y.push_back(j);
                  }
                }
             }
    
	for(int i=0;i<x.size();i++){
		int index=x[i];
		for(int j=0;j<m;j++){
			matrix[index][j]=0;
		}
	}

	for(int j=0;j<y.size();j++){
		int index=y[j];
		for(int i=0;i<n;i++){
			matrix[i][index]=0;
		}
	}
}
};