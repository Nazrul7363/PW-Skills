#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();
    
    for (int i = 0; i < size; i++) {
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) &&
            (i == size - 1 || flowerbed[i + 1] == 0)) {
            flowerbed[i] = 1;
            count++;
        }
        
        if (count >= n) {
            return true;
        }
    }
    
    return false;
}

int main() {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;
    
    bool canPlant = canPlaceFlowers(flowerbed, n);
    
    cout << canPlant << endl;
    
    return 0;
}
