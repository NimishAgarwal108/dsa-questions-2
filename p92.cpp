//climb stairs coding ninja
#include<iostream>
using namespace std;
int climbstairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans=climbstairs(n-1)+climbstairs(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"enter the number of stairs"<<endl;
    cin>>n;

cout<<climbstairs(n)<<endl;
return 0;



}