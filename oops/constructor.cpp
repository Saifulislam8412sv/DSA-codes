#include<iostream>
using namespace std;
class student{
    public:
    string name;
    string address;
    int rollNo;
    int clas;
    student(string n,string a,int r,int c){
        name=n;
        address=a;
        rollNo=r;
        clas=c;
    }

};
int main(){
    student s("ali","alpha2",23,6);
    cout<<s.name<<" "<<s.address<<" "<<s.rollNo<<" "<<s.clas<<endl;

    student s1("saili","gamma2",203,9);
    cout<<s1.name<<" "<<s1.address<<" "<<s1.rollNo<<" "<< s1.clas<<endl;

}
