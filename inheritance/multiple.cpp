#include<iostream>
using namespace std;
class a{
    public:
    void show(){
        cout<<"This is A class";
    }
};

class b{
    public:
    void show(){
        cout<<"This is B class";
    }
};

class c : public a , public b{
    
};
int main(){
    c obj;
    obj.show();
}