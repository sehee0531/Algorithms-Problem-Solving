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
		if(mp[i]){//�ߺ��� ���ڰ� ���� ��쿡�� continue���� ���� �������� �Ѿ 
			continue;
		}
		else{//�ߺ����� �ʾ��� ��쿡�� 1����  
			mp[i]=1; 
		} 
	}
	vector<int> ret;
	for(auto it: mp){
		ret.push_back(it.first); //key���� ret�� �־��ش� 
	}
	for(int i : ret)cout<<i<<"\n";
}*/
