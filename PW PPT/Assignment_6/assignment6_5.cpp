#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i = 0;
        int j = nums2.size() - 1;
        
        while (i < nums1.size() && j >= 0) {
            ans += nums1[i] * nums2[j];
            i++;
            j--;
        }
        
        return ans;
    }


int main() {

    vector<int> nums1 = {5, 3, 4, 2};
    vector<int> nums2 = {4, 2, 2, 5};
    int result = minProductSum(nums1, nums2);
    cout <<result << endl;

    return 0;
}
