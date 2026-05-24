#include <bits/stdc++.h>
using namespace std;

// 1. for the outer loop count the number of lines.
// 2. for the inner loop focus on the columns and connnect them somehow to the rows.
// 3. print the "*" inside the inner loop.
// 4. observe symmetry optional step.

void p1(){
    int rows,cols;
    cin >> rows >> cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p2(){
    int rows,cols;
    cin >> rows >> cols;
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p3(){
    int rows,cols;
    cin >> rows >> cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}
void p4(){
    int rows,cols;
    cin >> rows >> cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}
void p5(){
    int rows,cols;
    cin >> rows >> cols;
    for(int i=rows;i>0;i--){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p6(){
    int rows,cols;
    cin >> rows >> cols;
    for(int i=rows;i>0;i--){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}
void p7(){
    int rows,cols;
    cin >> rows >> cols;
    for(int i=rows;i>0;i--){
        for(int j=1;j<=i;j++){
            cout << " ";
        }
        for(int j=0;j<cols-i;j++){
            cout << "*";
        }
        for(int j=0;j<cols-i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p8(){
    // *****
    //  *** 
    //   *
    int rows,cols;
    cin >> rows >> cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p9(){
    //  *
    // ***
    // ***
    //  *
    int rows,cols;
    cin >> rows >> cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p10(){
    // *
    // **
    // ***
    // **
    // *
    int rows,cols;
    cin >> rows >> cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p18(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(char c='E'-i;c<='E';c++){
            cout << c;
        }
        cout << endl;
    }
}
void p19(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << "-";
        }
        for(int j=0;j<i;j++){
            cout << "-";
        }
        for(int j=n;j>i;j--){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << "-";
        }
        for(int j=0;j<n-i-1;j++){
            cout << "-";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    // p1();
    // p2();
    // p3();
    // p4();
    // p5();
    // p6();
    // p7();
    // p8();
    // p9();
    // p10();
    // p18();
    p19();
}