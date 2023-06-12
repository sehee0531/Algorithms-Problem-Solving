# Algorithms-Problem-Solving
알고리즘 문제 풀이

## 문제
알파벳 소문자로만 이루어진 단어가 주어진다. 이때, 이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.
팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다. 
level, noon은 팰린드롬이고, baekjoon, online, judge는 팰린드롬이 아니다.

## 코드

```
#include<bits/stdc++.h>
using namespace std;

string str,temp;
int main(){
	cin>>str;
	temp=str;
	reverse(temp.begin(),temp.end());
	if(str==temp) cout<<1<<"\n";
	else cout<<0<<"\n";
	return 0;
		
}
```

## 풀이
원래 문자열과 문자열 전체를 뒤집은 것이 같은지 비교하면 되는 문제이다. temp라는 문자열(원본)을 뒤집은 뒤 원본 문자열과 비교
