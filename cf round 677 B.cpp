#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int frr[n+5]={0};
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i]==0)frr[i]=0;
            else frr[i]=1;
        }
        else
        {
            if(arr[i]==1)
            {
                if(arr[i-1]==1)frr[i]=frr[i-1]+1;
                else frr[i]=1;
            }
        }
    }

    for(int i=n-1;i>=1;i--)
    {
        if(frr[i]>0&&frr[i-1]>0)frr[i-1]=frr[i];
    }

    int mx=0;

    for(int i=0;i<n;i++)mx=max(frr[i],mx);

   // cout<<mx<<endl;

  // for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;

    vector<pair<int,int> >v;

    for(int i=0;i<n;i++)
    {
        if(frr[i]==mx)
        {
            for(int j=i;j<n;j++)
            {
               // if(arr[j]==mx)continue;
                 if(j==n-1&&frr[j]==mx)
                {
                    v.push_back(make_pair(i,j));
                    i=j;
                    break;
                }
                else if(frr[j]==mx)continue;
                else
                {
                    v.push_back(make_pair(i,j-1));
                    i=j-1;
                    break;
                }
            }
        }
    }

    long long cnt=0;

    for(int i=0;i<v.size();i++)
    {
        int a=v[i].first;
        int b=v[i].second;
      //  cout<<a<<" "<<b<<endl;
        long long sum=0,kp=0;
        for(int p=a-1;p>=0;p--)
        {
           if(frr[p]==0)kp++;
           if(frr[p]!=0)sum+=kp,kp=0;
        }
        kp=0;
        for(int j=b+1;j<n;j++)
        {
             if(frr[j]==0)kp++;
           if(frr[j]!=0)sum+=kp,kp=0;
        }
        cnt=max(cnt,sum);
    }

    cout<<cnt<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

