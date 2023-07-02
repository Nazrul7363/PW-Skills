#include <iostream>
#include <vector>

using namespace std;

int minDeleteSumHelper(string& s1, string& s2, int i, int j) {
    // Base cases
    if (i == 0 && j == 0) {
        return 0;
    }
    if (i == 0) {
        int sum = 0;
        for (int k = 0; k < j; k++) {
            sum += s2[k];
        }
        return sum;
    }
    if (j == 0) {
        int sum = 0;
        for (int k = 0; k < i; k++) {
            sum += s1[k];
        }
        return sum;
    }

    if (s1[i - 1] == s2[j - 1]) {
        return minDeleteSumHelper(s1, s2, i - 1, j - 1);
    } else {
        int deleteS1 = s1[i - 1] + minDeleteSumHelper(s1, s2, i - 1, j);
        int deleteS2 = s2[j - 1] + minDeleteSumHelper(s1, s2, i, j - 1);
        return min(deleteS1, deleteS2);
    }
}

int minimumDeleteSum(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();

    return minDeleteSumHelper(s1, s2, m, n);
}

int main() {
    string s1 = "sea";
    string s2 = "eat";

    int result = minimumDeleteSum(s1, s2);

    cout << result << endl;

    return 0;
}
