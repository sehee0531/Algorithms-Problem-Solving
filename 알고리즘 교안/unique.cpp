#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v{2,2,1,1,2,2,3,3,6,5,5,4,7,8,9,9};
	sort(v.begin(),v.end()); 
	v.erase(unique(v.begin(),v.end()),v.end());
	for(int i : v) cout<<i<<" ";
	return 0;
}
