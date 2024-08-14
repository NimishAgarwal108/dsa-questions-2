#include<iostream>
using namespace std;
int main(){
    //row wise input in 2 D array
    int brr[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>brr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    //column wise input
    int arr[3][3];

    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}