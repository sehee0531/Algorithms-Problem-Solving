#include<bits/stdc++.h> 
using namespace std;
vector<string> split(string input, string delimiter){ //delimiter�� ������� �ɰ� 
	vector<string> ret; //������� return ���� ����
	long long pos =0; //���� ū ���ڸ� �ٷ� �� �ִ� long long ��� 
	string token=""; 
	while((pos=input.find(delimiter))!=string::npos){//�ش� ���ڿ��� ã�� ���ϸ� string::npos�� ��ȯ�� 
		token = input.substr(0,pos);//ã������ �ش� pos���� �ش� �κ� ���ڿ� ��� 
		ret.push_back(token); // ������ ���ڿ��� ret�̶�� �迭�� ���� 
		input.erase(0,pos+delimiter.length());//�տ������� ���ڿ��� ����� 
	}
	ret.push_back(input);
	cout<<ret.size();
	return ret;
}

int main(){
	string s = "�ȳ�ȳ� ���� ������ ������� �Ծ����� ���� ����!", d=" ";
	vector<string> a = split(s,d);
	for(string b : a){
		cout<<b<<"\n";
	}
	
} 
