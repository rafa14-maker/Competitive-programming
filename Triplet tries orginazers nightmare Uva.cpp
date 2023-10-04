#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int arr[n+5][n+5];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<int>v;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                for(int k=1;k<=n;k++)
                {
                    if(k!=j&&k!=i)
                    {
                       if((i<j&&j<k)||(i>j&&j>k))
                       {
                           if(arr[i][j]&&arr[j][k]&&arr[k][i])
                           {
                               v.push_back(i);
                               v.push_back(j);
                               v.push_back(k);
                           }
                       }
                       if(i<j&&j<k)
                       {
                           if(!arr[i][j]&&!arr[j][k]&&!arr[k][i]&&!arr[j][i]&&!arr[k][j]&&!arr[i][k])
                           {
                                 v.push_back(i);
                               v.push_back(j);
                               v.push_back(k);
                           }
                       }
                    }
                }
            }
        }
    }

    cout<<v.size()/3<<endl;

    for(int i=0;i<v.size();i+=3)
    {
        cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<endl;
    }

}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        solve(n);
    }
}
