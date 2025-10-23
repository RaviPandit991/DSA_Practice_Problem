#include<iostream>
using namespace std;
class student{
    public:
    //statics varaiable
        static int count;

        student(){
            count++;
        }
    //statics function
        static void printhello(){
            cout<<"Count : "<<student::count;
        }
};
int student::count=0;
int main(){
    student s1,s2,s3;
    student::printhello();
}