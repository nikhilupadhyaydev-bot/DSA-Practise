#include <bits/stdc++.h>
using namespace std;

void selection(){
    // select minimums - basically what we do is select and sort
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }
    // sorting starts here
    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    // checking sorted array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    selection();
    return 0;
}