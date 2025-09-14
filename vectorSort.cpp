#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
        v.push_back(0);
        v.push_back(1);

        v.push_back(1);

        v.push_back(0);

        v.push_back(1);
        v.push_back(0);

        v.push_back(0);
        v.push_back(1);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    int i=0,j=v.size()-1,n=v.size(),temp=0;
    while(i<j)
    {
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else if(v[i]==1 &&v[j]==0){

             temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }    
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
        }
   


 