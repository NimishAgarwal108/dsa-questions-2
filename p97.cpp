#include<iostream>
#include<string>
using namespace std;
//reverse a string using recursion
void reverse(string & str,int i,int j){
    //base case
    if(i>=j){
        return;
    }
    //processing
    
    swap(str[i],str[j]);
    
    //recursive call
    reverse(str,i+1,j-1);
}
int main(){
    string name="123evol";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}