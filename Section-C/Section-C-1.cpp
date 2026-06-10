#include <bits/stdc++.h>
using namespace std;

void p1(){
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    // testing
    // for(int i=0;i<n;i++){
    //     cout << v[i] << " ";
    // }
    sort(v.begin(),v.end());
    // sorted array
    cout << "Sorted Array\n";
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Max Element\n";
    cout << v[n-1];
}
int main(){
    p1();
}