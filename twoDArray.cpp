#include<iostream>
#include<vector>
using namespace std;
int main()
//{
//     int a[2][3]={1,2,3,4,5,6};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++)
//         {
//             cout<<a[i][j]<<" ";

//         }
//         cout<<endl;
//     }
// }

    // i/p from user

    {
        int m,n;
        cout<<"enter m:"<<"enter n:";
        cin>>m>>n;
        int arr[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];

            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";

            }
            cout<<endl;
        }
    }