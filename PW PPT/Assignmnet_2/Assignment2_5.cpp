#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumProduct(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3]; 
    int product2 = nums[0] * nums[1] * nums[n - 1];  
    
    return max(product1, product2);
}

int main() {
    vector<int> nums = {1, 2, 3};
    int maxProduct = maximumProduct(nums);
    
    cout <<maxProduct << endl;
    
    return 0;
}
