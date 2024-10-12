#include<iostream>
using namespace std;
class student{
    private:
    char name[20];
    int roll;
    float marks;
    public:
    void getdata(){
        cout<<"Enter details of student :"<<endl;
        cin>>name>>roll>>marks;
    }
    void putdata(){
        cout<<"The details of student are as follows:"<<endl;
        cout<<name<<marks<<roll;
    }
};
int  main(){
    student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.putdata();
    s2.putdata();
}