#include<iostream>
#include<math.h>
//insertion sort//
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0&&arr[j]>key){
               arr[j+1]=arr[j];
               j--;
            }
         arr[j+1]=key;   
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
    insertion(arr,n);
    printarray(arr,n);
    return 0;
}