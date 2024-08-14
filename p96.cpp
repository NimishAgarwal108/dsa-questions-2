#include<iostream>
using namespace std;
//binary search using recursion
bool bs(int*arr,int s,int e,int k){
    //base case
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;

    if(arr[mid]==k){
        return true;
    }
    //processing
    if(arr[mid]>k){
        return bs(arr,s,mid-1,k);
    }
    else{
        return bs(arr,mid+1,e,k);
    }

}
int main(){
    //array must be sorted in bs
    int arr[6]={2,4,6,8,9,54};
    bool ans=bs(arr,0,6,54);
    cout<<ans<<"      "<<endl;
    if(ans){
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is not present"<<endl;
    }
    
return 0;
}