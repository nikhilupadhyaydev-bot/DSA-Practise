#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t>0){
	    int n;
	    cin >> n;
	    int m=2*n;
	    int arr[m];
	    for(int i=0;i<m;i++){
	        cin >> arr[i];
	    }
	    for(int i=n;i<m;i++){
	        if(arr[n]>=arr[i]){
	            max=arr[n];
	        }
	        else{
	            max=arr[i];
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(arr[n]<arr[i]){
	            min=arr[n];
	        }
	        else{
	            mini=arr[i];
	        }
	    }
	    for(int i=0;i<m;i++){
	        swap(min, max);
	    }
	    t--;
	}
}
