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
void print(student s){
    cout<<s.name<<" "<<s.address<<" "<<s.rollNo<<" "<<s.clas<<endl;
}
int main(){
    student s1("ali","alpha2",23,6);
    

    student s2("saili","gamma2",203,9);
   
    print(s1);
    print(s2);

}
