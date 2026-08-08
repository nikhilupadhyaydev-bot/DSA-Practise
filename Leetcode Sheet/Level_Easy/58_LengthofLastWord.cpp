#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            if(s[i]==' '&&count>0){
                break;
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    string name;
    getline(cin,name);
    cout << s.lengthOfLastWord(name);
}