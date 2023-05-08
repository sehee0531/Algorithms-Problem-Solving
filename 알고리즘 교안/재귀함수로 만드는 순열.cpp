/*#include<bits/stdc++.h>
using namespace std;
vector<int> v={1,2,3};
int main(){
	do{
		for(int i:v){
			cout<<i;
		}
		cout<<"\n";
	}while(next_permutation(v.begin(),v.end()));
	
}*/


#include<bits/stdc++.h>
using namespace std;

int a[3]={1,2,3};
vector<int> b;

void printV(vector<int> &b){
	for(int i=0;i<b.size();i++){
		cout<<b[i]<"\n";
	}
	cout<<"\n";
}
void makePermutation(int n,int r, int depth){
	if(r==depth){
		printV(b);
		return;
	}
	
	for(int i=depth;i<n;i++){
		swap(b[i],b[depth]);
		makePermutation(n,r,depth+1);
		swap(b[i],b[depth]);
	}
}

int main(){
	for(int i=0;i<3;i++)b.push_back(a[i]);
	makePermutation(3,3,0);
	return 0;
}


