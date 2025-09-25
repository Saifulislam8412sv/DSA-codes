#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float gpa;
};
int main(){
    Student s;
    s.name="saiful";
    s.roll=124;
    s.gpa=7.6;
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.gpa;

    
}