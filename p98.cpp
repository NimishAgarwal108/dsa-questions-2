#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==0){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0){
        //if even power then (a^b=a^b/2*a^b/2)
        return ans*ans;
    }
    else{
        //if odd (a^b=a*a^b/2*a^b/2)
        return ans*a*ans;

    }
}
int main(){
    int a,b;
    cout<<"enter the values of a and b (where b denotes power of a)-->"<<endl;
    cin>>a>>b;
    int solve=power(a,b);
    cout<<"output is----->"<<solve<<endl;
    return 0;
}