#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string arr[n+5];
    string frr[n+5];
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>arr[i];
        s=arr[i];
        reverse(s.begin(),s.end());
        frr[i]=s;
    }
    vector<string>fr;
    vector<string>kr;

    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==frr[j]&&mp[j]==0)
            {
                fr.push_back(arr[i]);
                kr.push_back(arr[j]);
                mp[j]==1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==frr[i]&&mp[i]==0)
        {
            fr.push_back(arr[i]);
            break;
        }
    }
    reverse(kr.begin(),kr.end());
    cout<<(fr.size()+kr.size())*m<<endl;
    for(int i=0;i<fr.size();i++)cout<<fr[i];
    for(int i=0;i<kr.size();i++)cout<<kr[i];
    cout<<endl;

}
