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
void p4(int &n){
    if(n==0){
        return;
    }
    cout << n << endl;
    n--;
    p4(n);
}
void p5(int &n, int &count, int &sum){
    if(count==n){
        cout << sum << endl;
        return;
    }
    sum = sum + count+1;
    count++;
    p5(n, count, sum);
}
int p6(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*p6(n-1);
}
int main(){
    string s;
    // getline(cin,s);
    // cout << endl;
    int n,count=0,sum=0;
    cin >> n;
    // p1(n,count);
    // p2(n,count,s);
    // p3(n,count);
    // p4(n);
    // p5(n,count,sum);
    cout << p6(n) << endl;
}