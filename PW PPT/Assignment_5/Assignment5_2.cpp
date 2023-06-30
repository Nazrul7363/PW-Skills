#include <iostream>

using namespace std;

int countCompleteRows(int n) {
    int rows = 0;
    int i = 1;

    while (n >= i) {
        n -= i;
        rows++;
        i++;
    }

    return rows;
}

int main() {
    int n = 5;
    int completeRows = countCompleteRows(n);

    cout  << completeRows << endl;

    return 0;
}
