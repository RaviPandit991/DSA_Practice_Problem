#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    int maxValue = 0;
    for (int &num : nums) {
        cin >> num;
        maxValue = max(maxValue, num);
    }

    int threshold;
    cin >> threshold;

    int low = 1;
    int high = maxValue;
    int answer = maxValue;

    while (low <= high) {
        int divisor = low + (high - low) / 2;
        long long sum = 0;

        for (int num : nums) {
            sum += (num + divisor - 1) / divisor;
        }

        if (sum <= threshold) {
            answer = divisor;
            high = divisor - 1;
        } else {
            low = divisor + 1;
        }
    }

    cout << answer;
    return 0;
}
