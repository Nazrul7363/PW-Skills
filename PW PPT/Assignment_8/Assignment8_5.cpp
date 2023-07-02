#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compress(vector<char>& chars) {
    string s = "";
    for (auto x : chars) {
        s += x;
    }

    if (s.size() == 1) {
        return 1;
    }

    int count = 1, ans = 0;
    char ch;
    vector<char> a;
    int n = s.size();
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            a.push_back(s[i]);
            if (count > 1) {
                ans += 2;
                string temp = to_string(count);

                for (int it = 0; it < temp.size(); it++)
                    a.push_back(temp[it]);
            }
            else
                ans += 1;
            count = 1;
        }
        else {
            ch = s[i];
            count++;
        }
    }
    a.push_back(s[n - 1]);
    if (s[n - 1] == s[n - 2]) {
        string temp = to_string(count);
        for (int it = 0; it < temp.size(); it++)
            a.push_back(temp[it]);
    }

    chars = a;

    return a.size();
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);

    cout <<newLength << endl;
   
    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}
