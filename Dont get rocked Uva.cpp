#include<bits/stdc++.h>
using namespace std;

char arr[10][10];
char krr[10][10];

bool check(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(krr[i][j]=='9')
            {
                for(int a=i+1;a<n;a++)
                {
                    if(krr[a][j]=='X')break;
                    else if(krr[a][j]=='9')
                    {
                        return false;
                    }
                }
                for(int a=j+1;a<n;a++)
                {
                    if(krr[i][a]=='X')break;
                    else if(krr[i][a]=='9')
                    {
                        return false;
                    }
                }

            }
        }
    }
    return true;
}

void solve(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int idx=0;
    int k=n*n;
    vector<int>v;
     for(int i=0;i<=pow(2,k);i++)
     {
         v.clear();
         for(int j=0;j<k;j++)
         {
             if(i&(1<<j))
             {
                 v.push_back(j);
             }
         }
         for(int i=0;i<n;i++)for(int j=0;j<n;j++)krr[i][j]=arr[i][j];
         int len=0;
         for(int i=0;i<v.size();i++)
         {
             int p=v[i];
             int a=p/n;
             int b=p%n;
             if(krr[a][b]!='X')krr[a][b]='9',len++;
         }
        // int len=v.size();
         if(check(n))idx=max(idx,len);
     }
     cout<<idx<<endl;
}

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        solve(n);
    }
}
/*
4
.X..
....
XX..
....
2
XX
.X
3
.X.
X.X
.X.
3
...
.XX
.XX
4
....
....
....
....
0
*/
