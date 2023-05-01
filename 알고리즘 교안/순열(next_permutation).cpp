#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={2,1,3};
	do{
		for(int i : arr)
		{
			cout << i <<" ";
		}
		cout<<endl;
	}while(next_permutation(&arr[0],&arr[0]+3));
}
