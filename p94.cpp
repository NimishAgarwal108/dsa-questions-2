//array is sorted or not
#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    //base acse
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int ans=issorted(arr+1,n-1);
        return ans;
    }

}
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=issorted(arr,n);
    if(ans){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;


}
