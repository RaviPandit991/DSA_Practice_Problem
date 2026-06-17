#include <iostream>
using namespace std;
void skipChar(string str1, string str2, int index, char ch){
    if(index==str2.length()){
        cout<<str1;
        return;
    }
    char c = str2[index];
    if(c==ch) skipChar(str1,str2,index+1,ch);
    else skipChar(str1+c,str2,index+1,ch);
}

int main() {
	// your code goes here
    string str;
    getline(cin,str);
    char ch;
    cin>>ch;
    skipChar("",str,0,ch);
	return 0;
}
