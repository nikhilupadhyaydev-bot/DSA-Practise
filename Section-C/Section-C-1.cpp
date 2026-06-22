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
void p7(){
    vector<int> arr = {1, 0, 2, 0, 3, 4};
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int x : arr) {
        cout << x << " ";
    }
}
void p8(){
    vector<int> arr = {5, 8, 2, 10, 7};
    int target = 10;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    cout << index;
}
void p9(){
    vector<int> a = {1, 2, 2, 4, 5};
    vector<int> b = {2, 3, 5, 6};

    int i = 0, j = 0;
    vector<int> res;
    while (i < a.size() && j < b.size()) {
        int val;
        if (a[i] < b[j]) {
            val = a[i++];
        } 
        else if (a[i] > b[j]) {
            val = b[j++];
        } 
        else {
            val = a[i];
            i++;
            j++;
        }
        if (res.empty() || res.back() != val) {
            res.push_back(val);
        }
    }
    while (i < a.size()) {
        if (res.empty() || res.back() != a[i]) {
            res.push_back(a[i]);
        }
        i++;
    }
    while (j < b.size()) {
        if (res.empty() || res.back() != b[j]) {
            res.push_back(b[j]);
        }
        j++;
    }
    for (int x : res) {
        cout << x << " ";
    }
}
void p10(){
    int n;
    cin >> n;  // size should be n-1 elements present
    int arr[n - 1];
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    long long total = (long long)n * (n + 1) / 2;
    cout << (total - sum);
}
void p11(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    cout << maxCount;
}
void p12(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans ^= arr[i];
    }
    cout << ans << endl;
}
void p13(){
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left = 0, sum = 0;
    int maxLen = 0;
    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
    }
    cout << maxLen << endl;
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
    // p11();
    // p12();
    p13();
}