#include<iostream>
using namespace std;
//to return row wise sum of 2D array and also find largest sum and in which row
void sum(int arr[4][3],int i, int j){
    cout<<"printing sum---------->>>>>>>>>"<<endl;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
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
   
   sum(arr,4,3);
   return 0;
}