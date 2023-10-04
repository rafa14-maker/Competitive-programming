#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string arr;
    string frr;
    cin>>arr>>frr;
    int idx=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<frr.size();j++)
        {
            if(arr[i]==frr[j])
            {
                int cnt=0;
                for(int k=0;k+i<arr.size()&&k+j<frr.size();k++)
                {
                    if(arr[i+k]==frr[j+k])cnt++;
                    else break;
                }
                idx=max(idx,cnt);
            }
        }
    }
    cout<<idx<<endl;
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve();
}
