#include <iostream>
#include <unordered_set>

using namespace std;

bool buddyStrings(string s, string goal) {
    int n = s.size();
    int m = goal.size();

    if (n != m)
        return false;
   
    if (s == goal) {
        unordered_set<char> uniqueLetters;
        for (char ch : s) {
            if (uniqueLetters.count(ch))
                return true;
            uniqueLetters.insert(ch);
        }
        return false;
    }

    
    int firstMismatch = -1, secondMismatch = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != goal[i]) {
            if (firstMismatch == -1)
                firstMismatch = i;
            else if (secondMismatch == -1)
                secondMismatch = i;
            else
                return false; 
        }
    }

    return (secondMismatch != -1 && s[firstMismatch] == goal[secondMismatch] &&
            s[secondMismatch] == goal[firstMismatch]);
}

int main() {
    string s = "ab";
    string goal = "ba";

    bool result = buddyStrings(s, goal);
    cout << boolalpha << result << endl;

    return 0;
}
