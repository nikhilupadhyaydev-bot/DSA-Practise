#include <bits/stdc++.h>
using namespace std;

void p1(){
    vector<int> v;
    int n,target;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter the target number to find : ";
    cin >> target;
    v.resize(n);
    cout << "Provide the array\n : ";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((v[i]+v[j]==target) && i!=j){
                cout << "Element " << v[i] << "at index " << i << "and Element " << v[j] << "at index " << j;
                return;
            }
        }
    }
    cout << "2 Sum Doesnt Exist at different indeces";
}
void p2(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements (0, 1, 2 only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
void p3(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Moore's Voting Algorithm
    int candidate = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }
    // Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }
    if (count > n / 2)
        cout << "Majority Element = " << candidate;
    else
        cout << "No Majority Element";
}
int main(){
    // p1();
    // p2();
    p3();
}