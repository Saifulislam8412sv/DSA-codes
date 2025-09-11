#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s="my name is saiful islam";
    stringstream a(s);
    string temp;
    while(a>>temp){
        cout<<temp<<endl;
    }

}