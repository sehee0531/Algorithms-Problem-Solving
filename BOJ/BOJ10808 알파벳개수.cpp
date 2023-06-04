#include<bits/stdc++.h>

using namespace std;
string s;
int av[123];
int cnt[26];
int main(){
	cin>>s;
	for(char a : s){
		cnt[a - 'a']++;	
	}
	for(int i=0;i<26;i++) cout<<cnt[i]<<" ";
	return 0;
	
}
