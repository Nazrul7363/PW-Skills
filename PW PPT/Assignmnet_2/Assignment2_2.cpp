#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int maxCandies(vector<int>& candyType) {
    unordered_set<int> uniqueTypes;
    
    for (int candy : candyType) {
        uniqueTypes.insert(candy);
    }
    
    int maxTypes = uniqueTypes.size();
    int maxAllowed = candyType.size() / 2;
    
    return min(maxTypes, maxAllowed);
}

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int maxTypes = maxCandies(candyType);
    
    cout << maxTypes << endl;
    return 0;
}
