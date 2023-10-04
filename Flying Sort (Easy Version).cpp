#include<bits/stdc++.h>
using namespace std;
int arr[3005];
int frr[3005];
int n;

int left(int k)
{
    vector<int>v;

    for(int i=0;i<n;i++)v.push_back(arr[i]);

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(frr[i]==v[j])
            {
                v[j]= -1;
                break;
            }
        }
    }

    int idx=k+1;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==-1)continue;
        else
        {
            if(v[i]==frr[idx])
            {
                idx++;
                continue;
            }
            else
            {
                return v.size()-k-i;
            }
        }
    }

    return 0;
}


void solve()
{
  //  int n;
    cin>>n;
 //   mp.clear();
    for(int i=0;i<n;i++)cin>>arr[i],frr[i]=arr[i];

    sort(frr,frr+n);
    bool tr=true;

    for(int i=0;i<n;i++)if(arr[i]!=frr[i])tr=false;

    if(tr)
    {
        cout<<0<<endl;
        return;
    }

    int idx=n;

    for(int i=0;i<n;i++)
    {
        idx=min(idx,i+1+left(i));
    }
    cout<<idx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
