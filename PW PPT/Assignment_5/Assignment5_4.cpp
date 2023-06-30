#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> removeCommon(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    vector<int> nums1_new;
    vector<int> nums2_new;

    for (int num : nums1) {
        if (set2.find(num) == set2.end()) {
            nums1_new.push_back(num);
        }
    }

    for (int num : nums2) {
        if (set1.find(num) == set1.end()) {
            nums2_new.push_back(num);
        }
    }

    return {nums1_new, nums2_new};
}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> answer = removeCommon(nums1, nums2);

    
    for (int num : answer[0]) {
        cout << num << " ";
    }
    cout<<endl;
    
    for (int num : answer[1]) {
        cout << num << " ";
    }
    

    return 0;
}
