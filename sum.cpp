#include<iostream>
#include<vector>
#include<string>
using namespace std;
// int main(){
//     string a="saiful islam";
//     // int a[15]="saiful islam";
// cout<<a<<"  ";

// }


        //string input
// int main(){
//     string a;
//     getline(cin,a);
//     cout<<a;

// // }
// int main(){
//     string a="saiful islam";
//     int count=0,i;
//     while(a[i]!='\0')
//     {
//         if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
//         {
//             count++;
//         }
//         i++;
//     }
//     cout<<a;
   
// }
int main(){
    string a="saiful islam";
    
   cout<<a<<endl;
for(int i=0;a[i]!='\0';i++)
if(i%2==0)
a[i]='y';

cout<<a;

}