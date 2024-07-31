#include<iostream>
using namespace std;
//to get the most occuring cgar in a word
char Getmostoccurchar(string s){
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;

    }
    int maxi=-1;int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalans='a'+ans;
    return finalans;
}

int main(){
    string s;
    cout<<"enter the word/string=";
    cin>>s;
    cout<<Getmostoccurchar(s);
    return 0;
}