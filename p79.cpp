#include<iostream>
using namespace std;
//LINEAR SEARCH IN 2D ARRAY
bool ispresent(int arr[4][3],int target,int i,int j){ 
     for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
}
     return 0;
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
   
   int target;
   cout<<"enter the number you want to search"<<endl;
   cin>>target;

   if(ispresent(arr,target,4,3)){
    cout<<"yes it is present"<<endl;
   }
   else{
    cout<<"no,it is not present"<<endl;
   }
   return 0;
}