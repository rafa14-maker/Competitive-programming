#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >v;
int arr[256];

void f(int n,int cnt,int prev)
{
    if(n==1)
    {
        if(cnt==1)return;
        vector<int>t;
        for(int i=0;i<cnt;i++)t.push_back(arr[i]);
        v.push_back(t);
        return ;
    }
    for(int i=prev;i<=n;i++)
    {
        if(n%i==0)
        {
            arr[cnt]=i;
            f(n/i,cnt+1,i);
        }
    }
}


int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        f(n,0,2);
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
         vector<int>t;
         t=v[i];
         for(int j=0;j<t.size();j++)
         {
             if(j==0)cout<<t[j];
             else cout<<" "<<t[j];
         }
         cout<<endl;
        }
    }
}
