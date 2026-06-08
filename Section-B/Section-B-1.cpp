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
void bubble(){
    // compares the adjacent element and pushes the maximum to the last
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }
    // Bubble sort starts
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            cout << "Sorted array given" << endl;
            break;
        }
        
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    // selection();
    bubble();
    return 0;
}