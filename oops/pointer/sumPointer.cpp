#include<iostream>
using namespace std;
int main(){
int a=10;
int b=34;
int *ptr=&a;
int *p=&b;
cout<<ptr<<endl;
cout<<p<<endl;
cout<<*ptr<<endl;
cout<<*p<<endl;
int sum=0;
sum=*ptr+*p;
cout<<"sum of a and b:"<<sum<<endl;




}