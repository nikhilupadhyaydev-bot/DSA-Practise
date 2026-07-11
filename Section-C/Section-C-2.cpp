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
void p4(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxSum = arr[0];
    int currentSum = arr[0];
    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << "Maximum Subarray Sum = " << maxSum;
    return;
}
void p5(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = arr[0];
    int currSum = arr[0];
    int start = 0, end = 0;
    int tempStart = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (currSum + arr[i] < arr[i]) {
            currSum = arr[i];
            tempStart = i;
        } else {
            currSum += arr[i];
        }

        if (currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }
    cout << "Maximum Subarray Sum = " << maxSum << endl;

    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void p6(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0;
    // Loop through each day as a potential buy day
    for (int i = 0; i < prices.size(); i++) {
        // Loop through each future day as a potential sell day
        for (int j = i + 1; j < prices.size(); j++) {
            // Calculate the profit
            int profit = prices[j] - prices[i];

            // Update maximum profit
            maxProfit = max(maxProfit, profit);
        }
    }
    cout << "Max Profit: " << maxProfit << endl;
}
void p7(){
    int n;
    cin >> n;
    vector<int> a(n), pos, neg;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] >= 0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    vector<int> res;
    int i = 0, j = 0;
    // alternate placing positive and negative
    while (i < pos.size() && j < neg.size()) {
        res.push_back(pos[i++]);
        res.push_back(neg[j++]);
    }
    // if any leftover elements remain
    while (i < pos.size()) res.push_back(pos[i++]);
    while (j < neg.size()) res.push_back(neg[j++]);
    for (int x : res) cout << x << " ";
}
void p8(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // Step 1: find first decreasing element from right
    int idx = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) {
            idx = i;
            break;
        }
    }
    // Step 2: if found, swap with just greater element on right
    if (idx != -1) {
        for (int i = n - 1; i > idx; i--) {
            if (a[i] > a[idx]) {
                swap(a[i], a[idx]);
                break;
            }
        }
    }
    // Step 3: reverse the right half
    sort(a.begin() + idx + 1, a.end());
    for (int x : a)
        cout << x << " ";

}
void p9(){
    int n;
    cin >> n;
    vector<int> a(n), ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxi = INT_MIN;
    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] >= maxi) {
            ans.push_back(a[i]);
            maxi = a[i];
        }
    }
    // Reverse to restore original order
    reverse(ans.begin(), ans.end());
    for (int x : ans)
        cout << x << " ";
}
void p10(){
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    int longest = 0;
    for (int x : st) {
        // Start of a sequence
        if (st.find(x - 1) == st.end()) {
            int curr = x;
            int cnt = 1;

            while (st.find(curr + 1) != st.end()) {
                curr++;
                cnt++;
            }

            longest = max(longest, cnt);
        }
    }
    cout << longest;
}
void p11(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    bool firstRowZero = false;
    bool firstColZero = false;
    // Check if first row has zero
    for (int j = 0; j < m; j++) {
        if (matrix[0][j] == 0)
            firstRowZero = true;
    }
    // Check if first column has zero
    for (int i = 0; i < n; i++) {
        if (matrix[i][0] == 0)
            firstColZero = true;
    }
    // Use first row and first column as markers
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    // Make cells zero based on markers
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }
    // Zero first row
    if (firstRowZero) {
        for (int j = 0; j < m; j++)
            matrix[0][j] = 0;
    }
    // Zero first column
    if (firstColZero) {
        for (int i = 0; i < n; i++)
            matrix[i][0] = 0;
    }
    // Print result
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void p12(){
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int mat[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(mat[i][j], mat[i][n - 1 - j]);
        }
    }

    cout << "Matrix after 90 degree rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
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
    // p11();
    p12();
}