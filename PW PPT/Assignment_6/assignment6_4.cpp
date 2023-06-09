#include <iostream>
#include <vector>
using namespace std;

    int findMaxLength(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int zeros = 0, ones = 0;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] == 0) {
                    zeros++;
                } else {
                    ones++;
                }
                if (zeros == ones) {
                    count = max(count, j - i + 1);
                }
            }
        }
        return count;
    }


int main() {
    
    vector<int> arr = {0,1};
    int maxLength = findMaxLength(arr);
    cout <<  maxLength << endl;

    return 0;
}
