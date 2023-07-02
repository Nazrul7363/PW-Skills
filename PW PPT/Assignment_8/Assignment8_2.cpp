#include <iostream>
#include <string>

using namespace std;

bool isValidHelper(string s, int start) {
    if (start == s.length()) {
        return true;
    }

    if (s[start] == ')') {
        return false;
    }

    if (s[start] == '(') {
        int end = start + 1;
        int count = 1;
        while (end < s.length() && count != 0) {
            if (s[end] == '(') {
                count++;
            } else if (s[end] == ')') {
                count--;
            }
            end++;
        }
        if (count != 0) {
            return false;
        }
        return isValidHelper(s, end);
    }

    return isValidHelper(s, start + 1) ||
           (start > 0 && s[start - 1] == '(' && isValidHelper(s, start + 1)) ||
           (start > 0 && s[start - 1] == '*' && isValidHelper(s, start + 1));
}

bool isValid(string s) {
    return isValidHelper(s, 0);
}

int main() {
    string s = "()";
    bool result = isValid(s);

    cout << (result ? "true" : "false") << endl;

    return 0;
}
