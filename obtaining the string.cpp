#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            int ans=0;
            for(int j=i+1;j<n;j++)
            {
                if(s[j]==t[i])
                {
                    ans++;
                    for(int k=j;k>i;k--)
                    {
                        if(s[k]!=s[k-1]){
                        swap(s[k],s[k-1]);
                        v.push_back(k);}
                    }

                    break;
                }
            }
             if(ans==0)
                    {
                      cout<<-1;return 0;
                    }
        }
    }
  //  cout<<s<<endl<<t<<endl;
    if(s!=t&&v.size()>1e4)cout<<-1;
    else
    {
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    }
}
