#include <bits/stdc++.h>
using namespace std;    
int a[3] = {1, 2,3};
vector<int> v; 
void printV(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "";
    }
    cout << "\n";
}
void makePermutation(int n, int r, int depth){
    if(r == depth){
        printV(v);
        return;
    }
    for(int i = depth; i < n; i++){ 
        swap(v[i], v[depth]);
        
        cout << i << " : " << depth << " ¹Ù²Û´Ù!!\n";
        printV(v);
        
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
        
        cout << i << " : " << depth << " ´Ù½Ã ¹Ù²Û´Ù!!\n"; 
        printV(v);
        printV(v);
    }
    return; 
}
int main(){ 
    for(int i = 0; i < 3; i++)v.push_back(a[i]); 
    makePermutation(3, 3, 0); 
    return 0; 
} 
