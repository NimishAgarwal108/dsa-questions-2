#include<iostream>
using namespace std;
//bubble sort using recursion
void sortarray(int*arr,int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortarray(arr,n-1);
}
int main(){
    int n;
    cout<<"enter the size of array--->"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements to sort---->"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortarray(arr,5);
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}