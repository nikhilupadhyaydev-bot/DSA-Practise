#include <bits/stdc++.h>
using namespace std;
int p1(int &n,int &a){
    int arr[n],count=0;
    cout << "Enter the elements of the array: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            count++;
        }
    }
    return count;
}
int main(){
    int n, a;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the element to be searched: ";
    cin >> a;
    int count = p1(n,a);
    cout << "The element " << a << " is appearing " << count << " times ";
}