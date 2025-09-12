#include<iostream>
#include<vector>
using namespace std;
int main()

        //input from user

//{
//     int a[3][3];
//     int m;
//     cout<<"enter m:";
//     cin>>m;
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     for(int i=0;i<=2;i++)
//     {
//         for(int j=0;j<=2;j++)
//         {
//             cin>>a[i][j];
//         }
//     }

//   for(int i=0;i<=2;i++)
//   {
//     for(int j=0;j<=2;j++)
//     {
//         cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
//   }
  

// }
{
  
     int a[3][3],sum=[i][j];
    int m;
    cout<<"enter m:";
    cin>>m;
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

 
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
          
      sum[i][j]=sum[i][j]+a[i][j]; 
        }
        cout<<sum<<" ";
    }
      
    
    cout<<endl;
}
