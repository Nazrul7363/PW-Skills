#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    int n = nums.size();
    bool increasing = true;
    bool decreasing = true;
    
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
        
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
    }
    
    return increasing || decreasing;
}

int main() {
    vector<int> nums = {1, 2, 2, 3};
    
    bool isMonotonicArray = isMonotonic(nums);
    
    cout << boolalpha<< isMonotonicArray << endl;
    
    return 0;
}
