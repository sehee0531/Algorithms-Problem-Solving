#include<bits/stdc++.h>
using namespace std;
int A,B,C,e,f,cnt[100],sum;
int main(){
  cin>>A>>B>>C;
  for(int i=0;i<3;i++){
    cin>>e>>f;
    for(int j=e;j<f;j++){
      cnt[j]++;
    }
  }
  for(int i=0;i<100;i++){
	if(cnt[i]){
  		if(cnt[i]==1) sum+=A;
    	else if(cnt[i]==2) sum+=B*2;
    	else if(cnt[i]==3) sum+=C*3;
	}
    
  }
  cout<<sum;
  return 0;
  
}
