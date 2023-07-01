#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int low = 0;
    int high = m * n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int midElement = matrix[mid / n][mid % n];

        if (midElement == target) {
            return true;
        } else if (midElement < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;

    bool result = searchMatrix(matrix, target);
    cout << boolalpha << result << endl;

    return 0;
}
