/*�������� Ǫ�� �� 1. �տ������� 3���� ���ڿ��� ����϶�
2. �ش� ���ڿ��� �Ųٷ��ؼ� ����϶�
3. �ش� ���ڿ� ���� "umzunsik �̶� ���ڿ��� �߰��϶�*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string dopa ="umzunsik";
	cout<<dopa<<"\n";
	//3���� ������� 
	cout<<dopa.substr(0,3)<<"\n";
	//���ڿ��� �Ųٷ� 
	reverse(dopa.begin(),dopa.end());
	cout<<dopa<<"\n"; 
	// ���ڿ� ���� ���ڿ� �߰� 
	reverse(dopa.begin(),dopa.end());
	dopa+="umzunsik";
	cout<<dopa<<"\n";
	return 0;
} 
