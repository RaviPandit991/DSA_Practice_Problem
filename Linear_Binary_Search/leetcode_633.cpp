//approach 1;
#include<bits/stdc++.h>
using namespace std;
bool ispersqrt(int n){
        int x = (int)sqrt(n);
        if(x*x==n) return true;
        else return false;
    }
int main(){
    int c;
    cout<<"Enter a number : ";
    cin>>c;
    int x=0;
    int y=c;
    bool value=false;
    while(x<=y){
        if(ispersqrt(x) && ispersqrt(y)){
            value = true;
            break;
        }
        else if(!ispersqrt(y)){
            y=(int)(sqrt(y))*(int)(sqrt(y));
            x=c-y;
        }
        else{
            int value = (int)sqrt(x);
            x=(value+1)*(value+1);
            y=c-x;
        }
    }
    cout<<value;
}

//approach 2
#include<bits/stdc++.h>
using namespace std;
bool ispersqrt(int n){
        int x = (int)sqrt(n);
        if(x*x==n) return true;
        else return false;
    }
int main(){
    int c;
    cout<<"Enter a number : ";
    cin>>c;
    int x=0;
    int y=sqrt(c);
    bool value=false;
    while(x<=y){
        int sum =(x*x)+(y*y);
        if(sum==c){
            value = true;
            break;
        }
        else if(sum<c){
            x++;
        }
        else{
            y--;
        }
    }
    cout<<value;
}