#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
	cout<<"f(n)="<<n<<"\n";
	if(n==1||n==0)return n; //�������� 
	return fibo(n-1)+fibo(n-2); //�� ���� �װ� ������ ���� ���Ѵ� 
}
int n=4;
int main(){
	
	cout<<fibo(n)<<"\n";
}
