#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string str;
    getline(cin,str);
    int n = str.length();
    reverse(str.begin()+2,str.begin()+6);
    cout<<str;
	return 0;
}