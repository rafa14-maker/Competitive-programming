#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
    int n;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(i+1<s.size()&&s[i]>s[i+1])
        {
            for(int j=0;j<s.size();j++)
            {
               if(i!=j) cout<<s[j];
            }
            return ;
        }
    }

   for(char c='z';c>='a';c--)
   {
       for(int i=0;i<s.size();i++)
       {
           if(s[i] == c)
           {
                  for(int j=0;j<s.size();j++)
            {
               if(i!=j) cout<<s[j];
            }
            return ;
           }
       }
   }


}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}

