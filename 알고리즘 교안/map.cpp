 #include<bits/stdc++.h>
 using namespace std;
 
 map<int, int> mp;
 int main(){
	vector<int> v{1,1,2,2,3,3};
	for(int i : v){
		if(mp[i]){
			continue;
		}
		else{
			mp[i]=1;
		}
	}
	vector<int> allKey;
	for(auto j : mp){
		allKey.push_back(j.first);
	}
	for(int result : allKey) cout<<result<<" ";
 }

/*#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main(){
	vector<int> v{1,1,2,2,3,3};
	for(int i:v){
		if(mp[i]){//중복된 숫자가 있을 경우에는 continue문을 통해 다음으로 넘어감 
			continue;
		}
		else{//중복되지 않았을 경우에는 1으로  
			mp[i]=1; 
		} 
	}
	vector<int> ret;
	for(auto it: mp){
		ret.push_back(it.first); //key값을 ret에 넣어준다 
	}
	for(int i : ret)cout<<i<<"\n";
}*/
