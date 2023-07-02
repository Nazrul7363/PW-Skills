#include <iostream>
#include <string>

using namespace std;

int minDistanceHelper(string word1, string word2, int m, int n) {
    if (m == 0) {
        return n;
    }
    if (n == 0) {
        return m;
    }

    if (word1[m - 1] == word2[n - 1]) {
        return minDistanceHelper(word1, word2, m - 1, n - 1);
    }

    int deleteFromWord1 = minDistanceHelper(word1, word2, m - 1, n) + 1;
    int deleteFromWord2 = minDistanceHelper(word1, word2, m, n - 1) + 1;

    return min(deleteFromWord1, deleteFromWord2);
}

int minDistance(string word1, string word2) {
    int m = word1.length();
    int n = word2.length();
    return minDistanceHelper(word1, word2, m, n);
}

int main() {
    string word1 = "sea";
    string word2 = "eat";

    int result = minDistance(word1, word2);
    cout << result << endl;

    return 0;
}
