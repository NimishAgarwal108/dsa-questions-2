#include<iostream>
#include<string>
//REMOVE ALL ADJACENT DUPLICATES
using namespace std;
    string removeOccurrences(string s, string part) {
        while(s.length()!=0&&s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
        
    }

int main(){
    string s;
    cout<<"enter the string with duplicate substring"<<endl;
    cin>>s;

    string p;
    cout<<"enter the duplicate part of string"<<endl;
    cin>>p;

    string ans=removeOccurrences(s,p);
    cout<<ans;
    return 0;
}