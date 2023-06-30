#include <iostream>
#include <vector>

using namespace std;

void construct2DArray(vector<int>& original, int m, int n, vector<vector<int>>& result) {
    int idx = 0;
    
    for (int i = 0; i < m; ++i) {
        vector<int> row;
        for (int j = 0; j < n; ++j) {
            row.push_back(original[idx++]);
        }
        result.push_back(row);
    }
}

void print2DArray(const vector<vector<int>>& arr) {
    for (const auto& row : arr) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> original = {1, 2, 3, 4};
    int m = 2;
    int n = 2;
    
    vector<vector<int>> result;
    
    construct2DArray(original, m, n, result);
    
    print2DArray(result);
    
    return 0;
}
