#include <iostream>
using namespace std;

long long uniquePaths(int i, int j, int m, int n) {
    if (i == m - 1 && j == n - 1)
        return 1;

    if (i >= m || j >= n)
        return 0;

    return uniquePaths(i + 1, j, m, n) +
           uniquePaths(i, j + 1, m, n);
}

int main() {
    int m, n;
    cin >> m >> n;

    cout << uniquePaths(0, 0, m, n) << endl;

    return 0;
}