#include<bits/stdc++.h>
using namespace std;
int a[9];

void printV(vector<int> height){
	int sum=0;
	vector<int> temp;
	for(int i=0;i<7;i++){
		sum+=height[i];
		temp.push_back(height[i]);
	}
	if(sum == 100){
		for(int j : temp){
			cout<<j<<"\n";
		}
		exit(0); //main함수를 끝내기 위해서 
	}
}

void combi(int start, vector<int> height){
	if(height.size()==7){
		printV(height);
		return;
	}
	
	for(int i=start+1;i<=9;i++){
		height.push_back(a[i]);
		combi(i,height);
		height.pop_back();
	}
}
int main(){
	for(int i=0;i<9;i++){
		cin>>a[i];
	}
	vector<int> height;
	combi(-1,height);
}
