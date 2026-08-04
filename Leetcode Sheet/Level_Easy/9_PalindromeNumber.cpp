#include <bits/stdc++.h>
using namespace std;
bool palindrome(int &n){
    if(n<0){
        return false;
    }
    // brute forcing my way through the palindrome
    long long reverse,m=n;
    while(m!=0){
        reverse=reverse*10+m%10;
        m=m/10;
    }
    // cout << reverse;
    if(reverse==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin >> n;
    cout << palindrome(n);
}