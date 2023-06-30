#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> findOriginalArray(vector<int>& changed) {
    int n = changed.size();
    if (n & 1) {
        return {};
    }
    vector<int> ans;
    map<int, int> mp;
    sort(changed.begin(), changed.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        if (mp.find(changed[i] * 2) != mp.end()) {
            if (mp[changed[i] * 2] > 0) {
                mp[changed[i] * 2]--;
            }
            ans.push_back(changed[i]);
            if (mp[changed[i] * 2] == 0) {
                mp.erase(changed[i] * 2);
            }
        } else {
            mp[changed[i]]++;
        }
    }
    for (auto val : mp) {
        if (val.second != 0) {
            return {};
        }
    }
    return ans;
}

int main() {
    vector<int> changed = {1, 3, 4, 2, 6, 8};

    vector<int> original = findOriginalArray(changed);

    if (original.empty()) {
        cout << "[]" << endl;
    } else {
       
        for (int num : original) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
