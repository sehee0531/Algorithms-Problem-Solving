#include<bits/stdc++.h>
using namespace std;
double a = 4.4; 
int c=4;
int main(){
	//<타입>*<변수명> =<해당 타입의 변수의 주소>
	double *b = &a; //*는 에스터리스크 
	int *d = &c;
	cout<<sizeof(b)<<"\n";
	cout<<sizeof(d)<<"\n";
	 	
}
