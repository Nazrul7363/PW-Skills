#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isStrobogrammatic(string num) {
        unordered_map<char, char> strobogrammaticMap = {
            {'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}
        };

        int left = 0;
        int right = num.size() - 1;

        while (left <= right) {
            if (!strobogrammaticMap.count(num[left]) || strobogrammaticMap[num[left]] != num[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    string num = "69";

    Solution solution;
    bool isStrobogrammatic = solution.isStrobogrammatic(num);

    if (isStrobogrammatic) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
