#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,1,9,5,2,6};
    int i=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
  while(i<n)
    {
       
    int correctIdx=arr[i]-1;
    if(i==correctIdx) i++;
    else{
        swap(arr[i],arr[correctIdx]);
    
    }
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}