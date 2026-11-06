#include <iostream>
#include <string>
using namespace std;

void GBS(const string& s, int n) {
    if (n == 0) {
        cout << s << '\n';
        return;
    }

    GBS(s + '0', n - 1);
    if (s.empty() || s.back() == '0') {
        GBS(s + '1', n - 1);
    }
}

int main() {
    int n;
    cout<<"Enter Size of binary : ";
    cin>>n;
    GBS("",n);
}
