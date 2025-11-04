#include <iostream>
//frequency count
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    int arr[n][m];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    bool arr2[n][m] = {false};
    cout << "\nElement frequencies:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!arr2[i][j]) {
                int current = arr[i][j];
                int count = 0;
                for (int x = 0; x < n; x++) {
                    for (int y = 0; y < m; y++) {
                        if (arr[x][y] == current) {
                            count++;
                            arr2[x][y] = true;
                        }
                    }
                }
                cout << current << "  " << count << " times"<<endl;
            }
        }
    }
    return 0;
}
