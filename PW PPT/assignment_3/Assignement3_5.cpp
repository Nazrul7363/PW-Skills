#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;

        if (carry == 0)
            break;
    }

    if (carry != 0)
        digits.insert(digits.begin(), carry);

    return digits;
}

int main() {
    vector<int> digits = {1, 2, 3};
    vector<int> result = plusOne(digits);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i]<< " ";
       
    }

    return 0;
}
