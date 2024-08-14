//key is present in the array or not
#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key){
    //base acse
    if(n==0){
        return false;
    }
    if(arr[0]=key){
        return true;
    }
    else{
        int ans=linearsearch(arr+1,n-1,key);
        return ans;
    }

}
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=linearsearch(arr,n,key);
    if(ans){
        cout<<"key is found "<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
    return 0;


}
