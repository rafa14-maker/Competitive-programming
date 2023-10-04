#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    char arr[n+5][n+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int i1=-1,j1=-1,i2=-1,j2=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='*')
            {
                if(i1==-1)i1=i,j1=j;
                else i2=i,j2=j;
            }
        }
    }
    if(i1!=i2&&j2!=j1){
   arr[i2][j1]='*';
   arr[i1][j2]='*';
    }
    else if(i1==i2)
    {
        if(i1+1<n)
        {
            arr[i1+1][j1]='*';
            arr[i2+1][j2]='*';
        }
        else if(i1-1>=0)
        {
             arr[i1-1][j1]='*';
            arr[i2-1][j2]='*';
        }
    }
    else if(j1==j2)
    {
         if(j1+1<n)
        {
            arr[i1][j1+1]='*';
            arr[i2][j2+1]='*';
        }
        else if(j1-1>=0)
        {
             arr[i1][j1-1]='*';
            arr[i2][j2-1]='*';
        }
    }

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)cout<<arr[i][j];
       cout<<endl;
   }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
