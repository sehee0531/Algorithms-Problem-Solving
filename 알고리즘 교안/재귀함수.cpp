#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
	cout<<"f(n)="<<n<<"\n";
	if(n==1||n==0)return n; //종료조건 
	return fibo(n-1)+fibo(n-2); //그 전의 항과 전전의 항을 더한다 
}
int n=4;
int main(){
	
	cout<<fibo(n)<<"\n";
}
