#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int closest_sum = INT_MAX;
    
    for (int i = 0; i < nums.size() - 2; i++) {
        int left = i + 1;
        int right = nums.size() - 1;
        
        while (left < right) {
            int current_sum = nums[i] + nums[left] + nums[right];
            
            if (abs(current_sum - target) < abs(closest_sum - target))
                closest_sum = current_sum;
            
            if (current_sum > target)
                right--;
            else if (current_sum < target)
                left++;
            else
                return target; 
        }
    }
    
    return closest_sum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    
    int closest_sum = threeSumClosest(nums, target);
    cout << closest_sum << endl;
    
    return 0;
}
