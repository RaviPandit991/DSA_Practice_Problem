#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers (0 to 9): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Create frequency array of size 10 (for 0 to 9)
    int freq[10] = {0};

    // Step 2: Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;  // increase count of that number
    }

    // Step 3: Print frequency
    cout << "\nFrequency of each element:\n";
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << " occurs " << freq[i] << " times\n";
        }
    }

    return 0;
}
