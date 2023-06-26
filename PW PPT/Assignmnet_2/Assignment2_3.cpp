#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findLHS(vector<int>& nums) {
    unordered_map<int, int> freq;
    int maxLength = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }
    
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        if (freq.find(num + 1) != freq.end()) {
            maxLength = max(maxLength, freq[num] + freq[num + 1]);
        }
    }
    
    return maxLength;
}

int main() {
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int maxLength = findLHS(nums);
    
    cout << maxLength << endl;
    return 0;
}
