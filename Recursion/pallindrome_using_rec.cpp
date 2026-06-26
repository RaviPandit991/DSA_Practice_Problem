#include <iostream>
using namespace std;
bool ispallindrome(string str, int i, int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else ispallindrome(str,i+1,j-1);
}
int main() {
    string str;
    cin>>str;
    int val = ispallindrome(str,0,str.length()-1);
    if(val == 0){
        cout<<"false";
    }else{
        cout<<"true";
    }
}