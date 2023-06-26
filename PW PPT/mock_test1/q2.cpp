#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCounts;
    

    for (char c : s) {
        charCounts[c]++;
    }
    

    for (int i = 0; i < s.length(); i++) {
        if (charCounts[s[i]] == 1) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    string s = "loveleetcode";
    cout << firstUniqChar(s) << endl; 

    return 0;
}
