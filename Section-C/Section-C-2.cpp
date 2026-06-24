#include <bits/stdc++.h>
using namespace std;

void p1(){
    vector<int> v;
    int n,target;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter the target number to find : ";
    cin >> target;
    v.resize(n);
    cout << "Provide the array\n : ";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((v[i]+v[j]==target) && i!=j){
                cout << "Element " << v[i] << "at index " << i << "and Element " << v[j] << "at index " << j;
                return;
            }
        }
    }
    cout << "2 Sum Doesnt Exist at different indeces";
}
int main(){
    p1();
}