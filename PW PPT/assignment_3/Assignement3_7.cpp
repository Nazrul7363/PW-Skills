#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<vector<int>> result;

    int start = lower;

    for (int num : nums) {
        if (num > start) {
            result.push_back({start, num - 1});
        }
        start = num + 1;
    }

    if (start <= upper) {
        result.push_back({start, upper});
    }

    return result;
}

int main() {
    vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0;
    int upper = 99;

    vector<vector<int>> result = findMissingRanges(nums, lower, upper);

    cout << "Ranges: ";
    for (const vector<int>& range : result) {
        cout << "[" << range[0] << "," << range[1] << "] ";
    }
    cout << endl;

    return 0;
}
