#include <bits/stdc++.h>

using namespace std;
int t;
string s;
int main(){
	cin>>t;
	string bufferflush;//Ư�����ڿ��� �������  
	getline(cin,bufferflush); //�����÷��� �� �޾ƾ��� 
	for(int i=0;i<t;i++){
		getline(cin,s);
		cout<<s<<"\n";
	}
	return 0;
}
