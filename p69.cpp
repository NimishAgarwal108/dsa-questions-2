#include<iostream>
//to calculate the length of string using character array
using namespace std;
int GetLength(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}

int main(){
    char name[100];
    cout<<"enter the name"<<endl;
    cin>>name;

    cout<<"length of your name is  "<<GetLength(name);
    return 0;
}