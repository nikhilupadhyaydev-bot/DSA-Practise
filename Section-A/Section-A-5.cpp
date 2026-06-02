#include <bits/stdc++.h>
using namespace std;
// This Whole subsection is dedicated to recursion

void p1(int &n,int &count){
    if(n==count){
        return;
    }
    cout << 1 << endl;
    count++;
    p1(n,count);
}
void p2(int &n,int &count,string s){
    if(n==count){
        return;
    }
    cout << s << count+1 << endl;
    count++;
    p2(n,count,s);
}
void p3(int &n,int &count){
    if(n==count){
        return;
    }
    cout << count+1 << endl;
    count++;
    p3(n,count);
}
int main(){
    string s;
    // getline(cin,s);
    // cout << endl;
    int n,count=0;
    cin >> n;
    // p1(n,count);
    // p2(n,count,s);
    p3(n,count);
}