#include<bits/stdc++.h>
using namespace std;

void solve(int n,int m)
{
    int arr[n+5];
    for(int i=0;i<n;i++)arr[i]=i;
    int one[m+5],two[m+5],dis[m+5];
    for(int i=0;i<m;i++)
    {
        cin>>one[i]>>two[i]>>dis[i];
    }
    int cnt=0;
    do
    {
        bool tr=true;
        for(int i=0;i<m;i++)
        {
            int idx1,idx2;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==one[i])
                {
                    idx1=j;
                }
                else if(arr[j]==two[i])
                {
                    idx2=j;
                }
            }
            if(dis[i]>0)
            {
                int k=abs(dis[i]-0);
                int p=abs(idx1-idx2);
                if(k<p)tr=false;
            }
            else if(dis[i]<0)
            {
                int k=abs(dis[i]-0);
                int p=abs(idx1-idx2);
                if(k>p)tr=false;
            }
        }
        if(tr)cnt++;
    }while(next_permutation(arr,arr+n));
    cout<<cnt<<endl;
}

int main()
{
    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve(n,m);
    }
}
