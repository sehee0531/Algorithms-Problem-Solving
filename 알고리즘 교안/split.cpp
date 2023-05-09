#include<bits/stdc++.h> 
using namespace std;
vector<string> split(string input, string delimiter){ //delimiter을 기반으로 쪼갬 
	vector<string> ret; //결과값을 return 해줄 아이
	long long pos =0; //가장 큰 숫자를 다룰 수 있는 long long 사용 
	string token=""; 
	while((pos=input.find(delimiter))!=string::npos){//해당 문자열을 찾지 못하면 string::npos를 반환함 
		token = input.substr(0,pos);//찾았으면 해당 pos까지 해당 부분 문자열 출력 
		ret.push_back(token); // 추출한 문자열을 ret이라는 배열에 넣음 
		input.erase(0,pos+delimiter.length());//앞에서부터 문자열을 지운다 
	}
	ret.push_back(input);
	cout<<ret.size();
	return ret;
}

int main(){
	string s = "안녕안녕 나는 지수야 헬륨가스 먹었더니 요롷게 됐지!", d=" ";
	vector<string> a = split(s,d);
	for(string b : a){
		cout<<b<<"\n";
	}
	
} 
