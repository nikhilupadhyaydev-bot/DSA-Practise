#include <bits/stdc++.h>
using namespace std;
void fun(vector<int>v,int target){
    // Brute Force for 2 SUM
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(v[i]+v[j]==target && v[i]!=v[j]){
                cout << "Index'es are " << i << " " << j;
                break;
            }
        }
    }
}
int main(){
    int n,target;
    cin >> n;
    cin >> target;
    vector <int> v;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    // for(int i=0;i<n;i++){
    //     cout << v[i] << endl;
    // }
    fun(v,target);
    return 0;
}