#include <bits/stdc++.h>
using namespace std;
void io(){
    cout << "Input Ouput in CPP" << endl;
    // int n;
    // cout << "Enter any number: ";
    // cin >> n;
    // cout << "You entered: " << n << endl;
}
void base(){
    cout << "Basics of CPP" << endl;
    // int, long, long long, float, double, string, getline, char
    // long long x;
    // double y;
    // string z;
    // cin >> x;
    // cout << "Enter a number: ";
    // cin >> x;
    // cout << "Enter a decimal number: ";
    // cin >> y;
    // cout << "Enter a string: ";
    // getline(cin,z);
    // cout << "You have entered: " << x << " " << y << " " << z << endl;
}
void elif(){
    cout << "If Else Statements in CPP" << endl;
    // double age;
    // cin >> age;
    // if (age>=18){
    //     cout << "You are an adult" << endl;
    // }
    // else{
    //     cout << "You are not an adult" << endl;
    // }
}
void swit(){
    cout << "Switch Case Statements in CPP" << endl;
    int day;
    cin >> day;
    switch(day){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
}
void arr(){
    cout << "Arrays in CPP" << endl;
    // double arr[5];
    // // point to be noted arrays have zero based indexing and they follow a specific data type further they are consequtive to each other
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << "You have entered: ";
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    // string s;
    // cin >> s;
    // cout << "You have entered: " << s << endl;
    // int len= s.size();
    // string stores character within itself
}
void loops(){
    cout << "Loops in CPP" << endl;
    // for (int i=0;i<10;i++){
    //     cout << "print" << i << endl;
    // }
    // int i=0;
    // while(i<10){
    //     cout << "print" << i << endl;
    //     i++;
    // }
    // do{
    //     cout << "print" << endl;
    // }
    // while(i>0);
}
void fun(){
    cout << "Functions in CPP" << endl;
    // void doesnt return anything
    // datatype returns something
    // pass by value - just pass the value of the variable to the function and any changes made to the variable inside the function will not affect the original variable outside the function
    // pass by reference - just pass the reference of the variable to the function and any changes made to the variable inside the function will affect the original variable outside the function
    // arrays always pass by reference because they are stored in a specific location in memory and we can access that location using the reference of the array
    // while others you need to pass it by using & symbol in the function parameter to pass it by reference and if you want to pass it by value then you can simply pass the variable without & symbol
}
void time(){
    cout << "Time Complexity in CPP" << endl;
    // time complexity can be defined as the rate at which the time taken by an algorithm increases as the size of the input increases. It is usually expressed in terms of big O notation, which describes the upper bound of the time complexity of an algorithm. For example, if an algorithm has a time complexity of O(n), it means that the time taken by the algorithm increases linearly with the size of the input. If an algorithm has a time complexity of O(n^2), it means that the time taken by the algorithm increases quadratically with the size of the input. Understanding time complexity is important for designing efficient algorithms and optimizing code.
    // rules
    // to be computed in worst case scenario
    // avoid constants
    // avoid lower values
    // space complexity is the amount of memory space taken by an algorithm as a function of the size of the input. It is usually expressed in terms of big O notation, which describes the upper bound of the space complexity of an algorithm. For example, if an algorithm has a space complexity of O(n), it means that the amount of memory space taken by the algorithm increases linearly with the size of the input. If an algorithm has a space complexity of O(n^2), it means that the amount of memory space taken by the algorithm increases quadratically with the size of the input. Understanding space complexity is important for designing efficient algorithms and optimizing code.
    // auxillary space and input space - auxillary space is the extra space taken by an algorithm apart from the space taken by the input. For example, if an algorithm has a space complexity of O(n) and it takes O(n) space for the input, then the auxillary space is O(1) because it does not take any extra space apart from the input. If an algorithm has a space complexity of O(n^2) and it takes O(n) space for the input, then the auxillary space is O(n^2) because it takes O(n^2) space apart from the input.
}
int main(){
    cout << "Function called! - Input Ouput" << endl;
    io();
    cout << "Function called! - Basics of CPP" << endl;
    base();
    cout << "Function called! - If Else Statements" << endl;
    elif();
    cout << "Function called! - Switch Case Statements" << endl;
    swit();
    cout << "Function called! - Arrays" << endl;
    arr();
    cout << "Function called! - Loops" << endl;
    loops();
    cout << "Function called! - Functions" << endl;
    fun();
    cout << "Function called! - Time Complexity" << endl;
    time();
}