#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = nums.size();
        int low=0,high=l-1,mid;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector<int>nums;
    int n;cout << "Size of the array";cin >> n;
    int target;cout << "Enter target";cin >> target;
    nums.resize(n);
    for(int i=0;i<n;i++){
        cin >> n;
    }
    cout << s.search(nums,target);
}