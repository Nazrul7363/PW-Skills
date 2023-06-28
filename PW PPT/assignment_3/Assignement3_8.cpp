#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canAttendMeetings(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    int n = intervals.size();
    for (int i = 1; i < n; i++) {
        if (intervals[i][0] <= intervals[i - 1][1]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}};
    
    bool canAttendAll = canAttendMeetings(intervals);
    
    cout << (canAttendAll ? "true" : "false") << endl;
    
    return 0;
}
