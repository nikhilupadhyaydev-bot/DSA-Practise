#include <bits/stdc++.h>
using namespace std;

void p1(){
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    // testing
    // for(int i=0;i<n;i++){
    //     cout << v[i] << " ";
    // }
    sort(v.begin(),v.end());
    // sorted array
    cout << "Sorted Array\n";
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Max Element\n";
    cout << v[n-1];
}
void p2(){
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << "Sorted Array\n";
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "2nd Largest Number is " << v[n-2];
}
void p3(){
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    // check for sorted here
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            cout << "Unsorted Array";
            return;
        }
    }
    cout << "Sorted Array";
}
void p4(){
    vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4};
    if (!nums.empty()) {
        int j = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                nums[++j] = nums[i];
            }
        }
        nums.resize(j + 1);
    }
    for (int x : nums) {
        cout << x << " ";
    }
}
void p5(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
    for (int x : arr) {
        cout << x << " ";
    }
}
void p6(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = arr.size();
    k %= n;
    vector<int> temp(k);
    for (int i = 0; i < k; i++)
        temp[i] = arr[i];
    for (int i = k; i < n; i++)
        arr[i - k] = arr[i];
    for (int i = 0; i < k; i++)
        arr[n - k + i] = temp[i];
    for (int x : arr)
        cout << x << " ";
}
int main(){
    // p1();
    // p2();
    // p3();
    // p4();
    // p5();
    p6();
}