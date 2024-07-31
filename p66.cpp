#include<iostream>
using namespace std;

////rotated array leetcode 189

    void Rotated(int nums[],int m,int k) {

        int temp[m];

        //where k>m then for such cases
        k=k%m;

        
        for(int i=0;i<m;i++){
            temp[(i+k)%m]=nums[i];
            }
        for(int i=0;i<m;i++){
            nums[i]=temp[i];
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

    int k;
    cout<<"enter the value upto which you want to rotate the array"<<endl;
    cin>>k;

    Rotated(arr,n,k);
    print(arr,n);
    return 0;
}