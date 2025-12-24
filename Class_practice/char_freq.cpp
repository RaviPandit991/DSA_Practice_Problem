#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>v = {'c','d','b','a','d','d','b','d','b','a'};
    vector<int>freq(26);
    for(int i=0;i<v.size();i++){
        freq[v[i]-97]++;
    }

    char target = 'd';
    cout<<freq[target-'a'];
}