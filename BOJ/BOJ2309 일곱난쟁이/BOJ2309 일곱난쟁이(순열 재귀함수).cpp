#include<bits/stdc++.h>
using namespace std;

int a[9];
vector<int> b;

void printV(){
	int sum=0;
	for(int i=0;i<7;i++){
		sum+=a[i];
	}
	if(sum==100){
		sort(a,a+9);
		for(int i=0;i<7;i++)cout<<a[i]<<"\n";
		exit(0);
	}
}
void makePermutation(int n,int r, int depth){
	
	if(r==depth){
		printV();
		return;
	}
	for(int i=depth;i<n;i++){
		swap(b[i],b[depth]);
		makePermutation(n,r,depth+1);
		swap(b[i],b[depth]);
		
	}
}

int main(){
	for(int i=0;i<9;i++){
		cin>>a[i];
	}
	makePermutation(9,7,0);
	return 0;
}
