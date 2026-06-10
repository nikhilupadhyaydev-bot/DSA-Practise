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
void p2(){
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << "Sorted Array\n";
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "2nd Largest Number is " << v[n-2];
}
int main(){
    // p1();
    p2();
}