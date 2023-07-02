#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mapping;
        set<char> mappedChars;
        int n = s.size() - 1;
        while (n >= 0) {
            if (mapping.count(s[n]) && mapping[s[n]] != t[n]) {
                return false;
            }
            if (!mapping.count(s[n]) && mappedChars.count(t[n])) {
                return false;
            }
            mappedChars.insert(t[n]);
            mapping[s[n]] = t[n];
            n--;
        }
        return true;
    }
};

int main() {
    string s = "egg";
    string t = "add";

    Solution solution;
    bool isomorphic = solution.isIsomorphic(s, t);

    if (isomorphic) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
