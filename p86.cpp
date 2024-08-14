   //rotate an 2d array 90degree clockwise
   //leetcode 48
    void rotate(vector<vector<int>>& matrix) {
         int n=matrix.size();
        //transpose
        for(int row=0;row<n-1;row++){
            for(int col=row+1;col<n;col++){
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        //reverse
        for(int row=0;row<n;row++){
                reverse(matrix[row].begin(),matrix[row].end());
            
            }
        }    