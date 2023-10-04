#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    map<int,int>kp;

    int pos = 0, cnt = 0;

    for(auto it = mp.begin();it!=mp.end();it++)
    {
        if(it->second == 1)
        {
            cnt++;
            kp[it->first] = pos;
            pos = 1 - pos;
        }
        else kp[it->first] = 2;
    }

    if(cnt%2==0)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(kp[arr[i]]==1)cout<<"A";
            else cout<<"B";
        }
        return ;
    }
    else
    {
        bool tr = true;

        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]>=3)tr=false;
        }

        if(tr)
        {
            cout<<"NO"<<endl;
            return ;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(kp[arr[i]]==0)cout<<"A";
            else
            {
                if(mp[arr[i]]>=3&&!tr)
                {
                    tr = true;
                    cout<<"B";
                    kp[arr[i]]=0;
                }
                else cout<<"B";
            }
        }
        cout<<endl;

    }


}

int main()
{
    solve();
}

/*

12

1 2 3 4 5 5 6 6 6 7 9 11


*/
