#include<iostream>
using namespace std;
class math{
    public:
    int c1;
    int c2;
    //1st method to do inline function
    void sum(int a,int b){
        cout<<a+b;
    }

    //2nd method to declare
    inline void sum2(int x, int y, int z);
};
inline void math::sum2(int x, int y, int z){
    cout<<x+y+z;
}
int main(){
    math m;
    m.sum(2,4);
    cout<<endl;
    m.sum2(2,3,4);
}