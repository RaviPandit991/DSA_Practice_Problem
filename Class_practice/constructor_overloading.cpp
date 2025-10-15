 #include<iostream>
 using namespace std;
 class student{
    public:
        int rollno;
        string name;
        int reg_no;
        int batch;

    student(int a, string fn, int b, int c){
        rollno = a;
        name = fn;
        reg_no = b;
        batch = c;
    }
    student(){

    }
 };
 int main(){
        student s1(03,"Ravi",12401796,2024);
        cout<<s1.batch;
        cout<<endl;
        //let me asume that if i want to declare in normal type of class so i need to make defult constructor
        student s2;
        s2.batch=2002;
        cout<<s2.batch;
 }