#include<bits/stdc++.h>
using namespace std;

vector<int>v[40];

int check(vector<int>a,vector<int>b)
{
    int counter=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[i])
        {
            counter++;
            break;
        }
    }
    return counter;
}

int main()
{
    while(1==1)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        memset(v,0,sizeof v);
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<k;j++)
            {
                int a;
                cin>>a;
                v[i].push_back(a);
            }
            sort(v[i].begin(),v[i].end());
        }
      // cout<<check(v[6],v[2])<<endl;
    }
}

