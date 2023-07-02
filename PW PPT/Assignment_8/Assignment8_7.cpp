#include <iostream>
#include <string>

using namespace std;

string decodeString(const string& s, int& index) {
    string decodedStr = "";
    int n = s.length();

    while (index < n && s[index] != ']') {
        if (isdigit(s[index])) {
            int k = 0;
            while (index < n && isdigit(s[index])) {
                k = k * 10 + (s[index] - '0');
                index++;
            }
            index++;  

            string subStr = decodeString(s, index);

            while (k > 0) {
                decodedStr += subStr;
                k--;
            }
        } else {
            decodedStr += s[index];
        }
        index++;
    }

    return decodedStr;
}

string decodeString(const string& s) {
    int index = 0;
    return decodeString(s, index);
}

int main() {
    string s = "3[a]2[bc]";
    string decoded = decodeString(s);
    cout << decoded << endl;

    return 0;
}
