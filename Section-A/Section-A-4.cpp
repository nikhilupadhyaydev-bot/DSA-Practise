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

void palindrome(){
    int n,rev=0,temp=0;
    cin >> n;
    temp=n;
    while(n!=0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    // cout << rev; reverse works successfully
    if(temp==rev){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not palindrome" << endl;
    }
}

void gcd(){
    int a,b;
    cin >> a >> b;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    cout << a << endl;
}
int main(){
    // count();
    // rev();
    // palindrome();
    gcd();
    return 0;
}