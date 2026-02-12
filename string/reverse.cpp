#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    getline(cin,s);
    int n = s.length();
    reverse(s.begin(),s.begin()+(n/2));
    cout<<s;
	return 0;
}