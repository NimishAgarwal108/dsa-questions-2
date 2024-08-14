#include<iostream>
#include<limits.h>
using namespace std;
//to return row wise sum of 2D array and also find largest sum and in which row
int maximumsum(int arr[4][3],int i, int j){
    int rowindex=-1;
    int maxi=INT_MIN;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
    }
    cout<<"maximum sum is"<<maxi<<endl;
    return rowindex;
}
int main(){
    //row wise input
    int arr[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
   int ans=maximumsum(arr,4,3);
   cout<<"the row is at index"<<ans<<endl;
   return 0;
}