#include <bits/stdc++.h>
using namespace std;
void p1(int &n,int &count){
    if(n==count){
        return;
    }
    cout << 1 << endl;
    count++;
    p1(n,count);
}
int main(){
    int n,count=0;
    cin >> n;
    p1(n,count);
}