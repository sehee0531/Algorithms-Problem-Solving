# Algorithms-Problem-Solving
알고리즘 문제 풀이

## 문제
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

```
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
```
