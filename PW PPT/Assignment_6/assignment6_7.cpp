#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int num = 1;
    int topRow = 0, bottomRow = n - 1, leftCol = 0, rightCol = n - 1;
    
    while (num <= n * n) {
       
        for (int i = leftCol; i <= rightCol; i++) {
            matrix[topRow][i] = num++;
        }
        topRow++;
        
       
        for (int i = topRow; i <= bottomRow; i++) {
            matrix[i][rightCol] = num++;
        }
        rightCol--;
        
       
        for (int i = rightCol; i >= leftCol; i--) {
            matrix[bottomRow][i] = num++;
        }
        bottomRow--;
        
        
        for (int i = bottomRow; i >= topRow; i--) {
            matrix[i][leftCol] = num++;
        }
        leftCol++;
    }
    
    return matrix;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    vector<vector<int>> matrix = generateMatrix(n);
    printMatrix(matrix);
    
    return 0;
}
