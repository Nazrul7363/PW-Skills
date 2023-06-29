#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> findCommonElements(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
    int i = 0, j = 0, k = 0;
    set<int> commonSet;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            commonSet.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr2[j] < arr3[k]) {
            j++;
        }
        else {
            k++;
        }
    }

    vector<int> result(commonSet.begin(), commonSet.end());
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 5, 7, 9};
    vector<int> arr3 = {1, 3, 4, 5, 8};

    vector<int> result = findCommonElements(arr1, arr2, arr3);

    cout << "Common elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
