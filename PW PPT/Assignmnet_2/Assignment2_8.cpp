#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumScore(vector<int>& nums, int k) {
    int n = nums.size();
    
    int minimum = nums[0];
    int maximum = nums[0];
    
    for (int i = 1; i < n; i++) {
        minimum = min(minimum, nums[i]);
        maximum = max(maximum, nums[i]);
    }
    
    if (maximum - minimum <= 2 * k) {
        return 0;
    } else {
        return maximum - minimum - 2 * k;
    }
}

int main() {
    vector<int> nums = {1};
    int k = 0;
    
    int minScore = minimumScore(nums, k);
    
    cout <<minScore << endl;
    
    return 0;
}
