#include<bits/stdc++.h>
using namespace std;

void solve()
{
    char arr[]={'A','B','C'};

    map<char,int>mp;

    string frr[3];
    for(int i=0;i<3;i++)cin>>frr[i];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(i!=j&&j!=k&&k!=i)
                {
                    mp.clear();
                    mp[arr[i]]=0;
                    mp[arr[j]]=1;
                    mp[arr[k]]=2;
                    bool tr = true;

                    for(int p=0;p<3;p++)
                    {
                        char a = frr[p][0];
                        char b = frr[p][2];
                        if(mp[a]>mp[b]&&frr[p][1]=='<')tr=false;
                          if(mp[a]<mp[b]&&frr[p][1]=='>')tr=false;
                    }

                    if(tr)
                    {
                        cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                        return ;
                    }

                }
            }
        }
    }

    cout<<"Impossible"<<endl;

}

int main()
{
    solve();
}
