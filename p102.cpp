class Solution {
public:
//leetcode 75 sort colors
    void swap(int &x,int &y){
            int temp=x;
            x=y;
            y=temp;
        }
    void sortColors(vector<int>& nums) {
        int p=0,q=0,r=nums.size()-1;
        while(q<=r){
            if(nums[q]==1){
                q++;
                   }
        else if(nums[q]==0){
            swap(nums[q],nums[p]);
            p++;
            q++;
        }
        else{
            swap(nums[q],nums[r]);
            r--;
        }
        
        }   
    }
};