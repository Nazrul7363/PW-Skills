#include <iostream>
#include <vector>
using namespace std ;

int removeElement( vector<int>& nums, int val) {
    int i = 0;  // Pointer i
    int j = 0;  // Pointer j

    while (j < nums.size()) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
        j++;
    }

    return i;
}

int main() {
     vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int k = removeElement(nums, val);

     cout << "k = " << k <<  endl;
     cout << "nums = [";
    for (int i = 0; i < k; i++) {
         cout << nums[i];
        if (i < k - 1) {
             cout << ",";
        }
    }
     cout << ",_,_]" <<  endl;

    return 0;
}
