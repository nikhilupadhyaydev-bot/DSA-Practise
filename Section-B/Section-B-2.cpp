#include <bits/stdc++.h>
using namespace std;
void merge(){
    // merge sort
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
}
int main(){
    merge();
}