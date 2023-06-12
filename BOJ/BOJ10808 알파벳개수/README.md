# Algorithms-Problem-Solving
알고리즘 문제 풀이

## 문제
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

## 코드

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

## 풀이
아스키코드의 값을 이용해서 풀 수 있다. a의 아스키코드 값은 97이다. 97 또는 'a'를 빼는 이유는 배열의 0번째 인덱스부터 사용하기 위해서이다.
카운트 된 배열을 출력해주면 되는 문제
