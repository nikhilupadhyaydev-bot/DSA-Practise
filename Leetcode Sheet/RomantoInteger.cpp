#include <bits/stdc++.h>
using namespace std;
void convert(string &s){
    int n=s.size();
    // int I = 1;
    // int V = 5;
    // int X = 10;
    // int L = 50;
    // int C = 100;
    // int D = 500;
    // int M = 1000;
    int num=0;
    for(int i=0;i<n;i++){
        if(s[i]=='M'){
            num=num+1000;
        }
    }
        for(int i=0;i<n;i++){
        if(s[i]=='D'){
            num=num+500;
        }
    }
        for(int i=0;i<n;i++){
        if(s[i]=='C'){
            num=num+100;
        }
    }
        for(int i=0;i<n;i++){
        if(s[i]=='L'){
            num=num+50;
        }
    }
        for(int i=0;i<n;i++){
        if(s[i]=='X'){
            num=num+10;
        }
    }
        for(int i=0;i<n;i++){
        if(s[i]=='V'){
            num=num+5;
        }
    }
        for(int i=0;i<n;i++){
        if(s[i]=='I'){
            num=num+1;
        }
    }
    cout << num;

    // NOTE - ONLY WORKS FOR BIG NUMBERS SUBTRACTION FIX REQUIRED!!!!
}
int main(){
    string s;
    getline(cin,s);
    convert(s);
}