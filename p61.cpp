#include<iostream>
#include<math.h>
//selection sort
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
            
        }
        swap(arr[minindex],arr[i]);
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
    selection(arr,n);
    printarray(arr,n);
    return 0;
}