#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> squares(n);

    for (int i = 0; i < n; ++i) {
        squares[i] = nums[i] * nums[i];
    }

    sort(squares.begin(), squares.end());

    return squares;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sortedSquares(nums);

   
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
