#include<iostream>
using namespace std;
class math{
    public:
        int c1;
        int c2;

    void sum(int x,int y);
};
void math::sum(int x,int y){
    cout<<x+y;
}
int main(){
    math m;
    m.sum(2,4); 
}