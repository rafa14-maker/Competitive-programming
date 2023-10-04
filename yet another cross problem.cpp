#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+7;

string arr[N];

int row[N],col[N];

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;

        for(int i=0;i<n;i++)row[i]=0;
        for(int j=0;j<m;j++)col[j]=0;

        for(int i=0;i<n;i++)cin>>arr[i];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='.')row[i]++,col[j]++;
            }
        }

        int res=1e7;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int counter=row[i]+col[j];
                if(arr[i][j]=='.')counter--;
                res=min(counter,res);
            }
        }
        cout<<res<<endl;
    }
}
