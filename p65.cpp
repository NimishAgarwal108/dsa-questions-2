#include<iostream>
using namespace std;

//to shift all zeroes to the left of the array also leetcode283

    void moveZeroes(int nums[],int m) {
        int i=0;
        for(int j=0;j<m;j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
    }

    void print(int ans[],int s){
        for(int i=0;i<s;i++){
            cout<<ans[i]<<" ";
        }
    }


int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    moveZeroes(arr,n);
    print(arr,n);
    return 0;
}