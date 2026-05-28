#include <bits/stdc++.h>
using namespace std;

void count(){
    int n,sum=0,count=0;
    cin >> n;
    while(n!=0){
        sum=n%10;
        n=n/10;
        count++;
    }
    cout << count << endl;
    cout << sum << endl;
}

void rev(){
    int n,rev=0;
    cin >> n;
    while(n!=0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    cout << rev << endl;
}

int main(){
    // count();
    rev();
    return 0;
}