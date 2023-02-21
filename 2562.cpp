#include <iostream>
using namespace std;
int main(){
    int a[9],num;
    int b=0;
    int max = 0;
    for(int i=0;i<=8;i++){
        cin>>num;
        a[i]=num;
        if(a[i]>max){
            max=a[i];
            b=i+1;
        }
    }
    cout<<max<<"\n"<<b;
    return 0;
}