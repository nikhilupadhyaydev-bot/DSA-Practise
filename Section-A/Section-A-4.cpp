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
int main(){
    count();
    return 0;
}