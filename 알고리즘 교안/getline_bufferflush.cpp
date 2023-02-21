#include <bits/stdc++.h>

using namespace std;
int t;
string s;
int main(){
	cin>>t;
	string bufferflush;//특정문자열을 기반으로  
	getline(cin,bufferflush); //버퍼플래시 후 받아야함 
	for(int i=0;i<t;i++){
		getline(cin,s);
		cout<<s<<"\n";
	}
	return 0;
}
