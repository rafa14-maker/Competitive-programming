#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,counter=0;

    cin>>n;

    char arr[n][5];

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
                cin>>arr[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
               if(j==0&&arr[i][0]=='O'&&arr[i][1]=='O'||(j==3&&arr[i][3]=='O'&&arr[i][4]=='O'))
               {
                   {
                       counter++;
                       arr[i][j]='+';
                       arr[i][j+1]='+';
                      i=n;
                   }
               }
        }
    }

if(counter==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
         for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
                cout<<arr[i][j];
        }
        cout<<endl;
    }
    }



    return 0;
}
