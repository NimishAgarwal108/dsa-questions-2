class Solution {
public:
//leetcode 56
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        //if ans (i.e. new declared 2 d arary )is empty or does not lie in last interval
        for(int i=0;i<n;i++){
            if(ans.empty()||intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]);
            }
        //if current interval lies in last interval
            else{
                ans.back()[1]=max(intervals[i][1],ans.back()[1]);
            }
        }
        return ans;


        
    }
};