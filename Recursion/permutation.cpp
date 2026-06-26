#include<iostream>
using namespace std;
void permutation(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.size();i++){
        char c = original[i];
        string right=original.substr(i+1);
        string left=original.substr(0,i);
        permutation(ans+c,right+left);
    }
}

int main(){
    string str = "abc";
    permutation("",str);   
}