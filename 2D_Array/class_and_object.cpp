#include<iostream>
using namespace std;
class animal{
    private:
        int leg;
        string color;
        string bread;
    public:
    int setleg(int value){
        leg =value;
        return leg;
    }
    int getleg(){
        return leg;
    }
};
int main(){
    animal dog;
    dog.setleg(4);
    cout<<dog.getleg();
    cout<<endl;

    animal cow;
    cow.setleg(5);
    cout<<cow.getleg();
}