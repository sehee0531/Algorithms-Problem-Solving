#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,cnt[100];
int main(){
	cin>>a>>b>>c;
	for(int i=0;i<3;i++){
		cin>>d>>e;
		for(int j=d;j<e;j++) cnt[j]++;
	}
	int sum=0;
	for(int i=1;i<100;i++) {
		if(cnt[i]==1) sum+=a;
		else if(cnt[i]==2)sum+=2*b;
		else if(cnt[i]==3)sum+=3*c;
	}
	cout<<sum;
	return 0;
	
}
