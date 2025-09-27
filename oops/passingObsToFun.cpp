#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int model;
    string color;
    
};
void fun(car c){
        cout<<c.name<<" "<<c.model<<" "<<c.color<<endl;
    }
    int main(){
        car c1;
        c1.name="volvo";
        c1.model=244434;
        c1.color=" white";

         car c2;
        c2.name="audi";
        c2.model=2432000;
        c2.color=" black";
        fun(c1);
        fun(c2);
    
    }
