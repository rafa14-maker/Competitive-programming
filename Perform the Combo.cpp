#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long frr[26]={0};
        long long arr[26]={0};
        arr[0]=0;
        frr[0]=0;
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        long long krr[m+5];
        for(int i=0;i<m;i++)cin>>krr[i];
        sort(krr,krr+m);

        int idx=0;
        for(int i=0;i<s.size();i++)
        {
            int k=s[i]-'a';
            arr[k]++;
          //  cout<<s[i]-'a'<<endl;
            while(i+1==krr[idx])
            {
                for(int j=0;j<26;j++)
                {
                    frr[j]+=arr[j];
                }
                idx++;
            }
          //  cout<<idx<<endl;
        }
        for(int j=0;j<26;j++)
                {
                    frr[j]+=arr[j];
                }
                for(int i=0;i<26;i++)cout<<frr[i]<<" ";
                cout<<endl;
    }
}
