#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


string addStrings(string num1, string num2) {
    int m = num1.size();
    int n = num2.size();
    int carry = 0;
    string result;

    int i = m - 1;
    int j = n - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        result.push_back(digit + '0');

        i--;
        j--;
    }

        reverse(result.begin(), result.end());

        return result;
    }


int main() {
    string num1 = "11";
    string num2 = "123";

    
    string sum = addStrings(num1, num2);

    cout << sum << endl;

    return 0;
}
