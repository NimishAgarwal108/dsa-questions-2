#include<iostream>
using namespace std;
//to reverse the input array
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
    cout<<"your reverse name is=="<<name;
    return 0;
}