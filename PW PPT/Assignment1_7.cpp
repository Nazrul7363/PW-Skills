#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int left = 0;  // left pointer

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    cout << "Output: [";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
