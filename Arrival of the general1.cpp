#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int seconds = 0;
    for (int i = 1; i < n; ++i) {
        if (heights[i] < heights[i - 1]) {
            seconds += heights[i - 1] - heights[i];
            heights[i] = heights[i - 1]; // Swap operation
        }
    }

    cout << seconds << endl;

    return 0;
}

