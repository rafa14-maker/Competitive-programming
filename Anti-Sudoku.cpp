#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        char arr[9][9];
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)cin>>arr[i][j];
        }
         for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(arr[i][j]=='1')arr[i][j]='7';
            }
        }




          for(int i=0;i<9;i++)
          {
              for(int j=0;j<9;j++)cout<<arr[i][j];
              cout<<endl;
          }
    }
}
