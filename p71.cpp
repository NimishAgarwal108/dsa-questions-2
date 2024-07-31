#include<iostream>
using namespace std;


//to check if palindrome or not
/*class Solution {
public:
    bool isPalindrome(string s) {
     string result;
     for(char c:s){
    if(c>='A'&&c<='Z'){
        result+=c+32;
    }
    else if((c>='a'&&c<='z')||(c>='0'&&c<='9')){
        result+=c;
    }
    }
    string rev=result;
    reverse(rev.begin(),rev.end());
    
    if(result==rev){
        return true;
    }
    else{
        return false;
    }
}
};
*/

char ToLowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

int CheckPalindrome(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(ToLowercase(ch[s])!=ToLowercase(ch[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}
void Reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
    {
        swap(name[s++],name[e--]);
    }
}
}
int GetLength(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}

int main(){
    char name[100];
    cout<<"enter the name="<<endl;
    cin>>name;

    cout<<"your name is=="<<name<<endl;

    int len=GetLength(name);
    cout<<"length of your name is  "<<len<<endl;
    Reverse(name,len);
    cout<<"your reverse name is=="<<name<<endl;

    cout<<"palindrome or not=="<<CheckPalindrome(name,len);
    return 0;
}