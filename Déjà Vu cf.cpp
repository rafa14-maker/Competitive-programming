#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
        cin>>s;
        bool tr=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='a')
            {
                tr=false;
                break;
            }
        }
        if(tr)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int k=0;
            int n=s.size();
            for(int i=n-1;i>=n/2;i--)
            {
                if(s[i]!='a')
                {
                    break;
                }
                k++;
            }
            for(int i=0;i<n;i++)
            {
                if(i==k)
                {
                    cout<<'a';
                }
                cout<<s[i];
            }
            cout<<endl;
        }
}

int main()
{
  int q;
  cin>>q;
  while(q--)solve();
}
