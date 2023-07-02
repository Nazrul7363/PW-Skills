#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isAnagram(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

void findAnagrams(string s, string p, int start, vector<int>& result) {
    if (start + p.length() > s.length())
        return;

    string substr = s.substr(start, p.length());
    if (isAnagram(substr, p))
        result.push_back(start);

    findAnagrams(s, p, start + 1, result);
}

vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    findAnagrams(s, p, 0, result);
    return result;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> result = findAnagrams(s, p);

    
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
