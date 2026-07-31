#include <bits/stdc++.h>
using namespace std;
void p1(){
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        long long val = 1;

        for (int col = 0; col <= row; col++) {
            cout << val << " ";

            // Compute next value in the row
            val = val * (row - col) / (col + 1);
        }

        cout << endl;
    }
}
int main(){
    p1();
}