#include <iostream>
using namespace std;
//REPLACE THE SPACES WITH @40
string replaceSpaces(string str){
	string temp="";
	for(char ch:str){
    if(ch==' '){
       temp+="@40";
	}
	else{
		temp+=ch;
	}
	}
	return temp;
}
int main(){
	string s;
	cout<<"enter the string with spaces"<<endl;
	getline(cin,s);

    string ans=replaceSpaces(s);
	cout<<ans;
	return 0;
}