#include <iostream>
using namespace std;
int pow(int n, int x){
    if(x==1) return n;
    int ans = pow(n,x/2);
    return ans*ans;
}

int main() {
    int n,x;
    cin>>n>>x;
    cout<<pow(n,x);
	return 0;
}