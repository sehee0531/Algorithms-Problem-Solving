/*구현문제 푸는 법 1. 앞에서부터 3개의 문자열을 출력하라
2. 해당 문자열을 거꾸로해서 출력하라
3. 해당 문자열 끝에 "umzunsik 이란 문자열을 추가하라*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string dopa ="umzunsik";
	cout<<dopa<<"\n";
	//3개의 문자출력 
	cout<<dopa.substr(0,3)<<"\n";
	//문자열을 거꾸로 
	reverse(dopa.begin(),dopa.end());
	cout<<dopa<<"\n"; 
	// 문자열 끝에 문자열 추가 
	reverse(dopa.begin(),dopa.end());
	dopa+="umzunsik";
	cout<<dopa<<"\n";
	return 0;
} 
