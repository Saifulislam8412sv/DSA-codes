#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    


    string str="saiful islam";
   for(int i=0;i<str.length();i++)
   {
    if(str[i]!='l')
    {
        cout<<str[i];
    }
   }
}