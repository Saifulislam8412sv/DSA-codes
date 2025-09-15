#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={0,1,2,4,5,40};
       for(int i=0;i<=n;i++)
    {
        if(i!=arr[i])
        {
            cout<<arr[i];
            break;
        }
    }
    return 0;
}
