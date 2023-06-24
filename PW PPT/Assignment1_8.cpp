#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> result;

  
    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            result.push_back(abs(nums[i]));
        } else {
            nums[index] = -nums[index];
        }
    }


    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            result.push_back(i + 1);
            break;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 2, 4};

    vector<int> result = findErrorNums(nums);

    cout << "Output: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
