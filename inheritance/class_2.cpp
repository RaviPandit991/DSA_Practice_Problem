#include<iostream>
using namespace std;
class base{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};

class publicchild : public base{
    public:
    void show(){
        x= 10;
        y= 20;
    }
};

class protectedchild : protected base{
    public:
    void show(){
        x=10; // there is no issue but now x become protected
        y=20; // there is no issue but now x become protected
    }
};

class privatechild : private base{
    public:
    void show(){
        x=10; //there is no issue but it became private variable
        y=20; //there is no issue but it became private variable
    }

};
int main(){

}