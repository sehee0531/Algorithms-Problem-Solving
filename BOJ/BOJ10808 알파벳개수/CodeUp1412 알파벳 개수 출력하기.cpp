#include<bits/stdc++.h>
using namespace std;
string str;
int cnt[123];
int main(){
	getline(cin,str); //�������� ���ڿ� �Է¹ޱ� 
	for(char a : str){
		cnt[a]++;
	}
	for(int i=97;i<123;i++)cout<<(char)i<<":"<<cnt[i]<<"\n";
}
