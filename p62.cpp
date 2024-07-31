#include<iostream>
#include<math.h>
//BUBBLE sort
using namespace std;
void bubble(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of the array bachaa!"<<endl;
    cin>>n;
    int arr[n];
    cout<<"now enter the array:"<<endl;
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    bubble(arr,n);
    printarray(arr,n);
    return 0;
}