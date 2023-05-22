#include<bits/stdc++.h>
using namespace std;

int n,m,b,c,a[100000],psum[100000];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		psum[i]=psum[i-1]+a[i];
	}
	for(int j=0;j<m;j++){
		cin>>b>>c;
		cout<<psum[c]-psum[b-1]<<"\n";
	}
	return 0;
}


