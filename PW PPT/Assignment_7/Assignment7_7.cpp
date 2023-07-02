#include <iostream>
#include <string>

using namespace std;

bool backspaceCompare(string s, string t) {
    int n = s.size(), m = t.size();

    for (int i = 0; i < s.size(); i++) {
        if (i != 0 && s[i] == '#') {
            s.erase(i - 1, 2);
            i -= 2;
        } else if (i == 0 && s[i] == '#') {
            s.erase(i, 1);
            i--;
        }
    }

    for (int i = 0; i < t.size(); i++) {
        if (i != 0 && t[i] == '#') {
            t.erase(i - 1, 2);
            i -= 2;
        } else if (i == 0 && t[i] == '#') {
            t.erase(i, 1);
            i--;
        }
    }

    return (s == t);
}

int main() {
    string s = "ab#c";
    string t = "ad#c";

    bool result = backspaceCompare(s, t);

    cout << (result ? "true" : "false") << endl;

    return 0;
}
