#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
   string s;
   cin>>s;

    bool a=false,b=false,c=false;

    int one=0,two=0,three=0;

    int l=0,r=0;

    int counter=1e7;

    while(l<s.size()&&r<s.size())
    {
     //   cout<<l<<" "<<r<<endl;
        if(!a||!b||!c)
        {
            if(s[r]=='1')one++,a=true;
            if(s[r]=='2')two++,b=true;
            if(s[r]=='3')three++,c=true;
             if(a&&b&&c)counter=min(counter,r-l+1);
            r++;
            continue;
        }
        if(a&&b&&c&&r<s.size())counter=min(counter,r-l+1);
        if(l<s.size())
        {
           counter=min(counter,r-l+1);
             if(s[l]=='1')one--;
            if(s[l]=='2')two--;
            if(s[l]=='3')three--;
            l++;
            if(one==0)a=false;
            if(two==0)b=false;
            if(three==0)c=false;
            if(a&&b&&c)counter=min(counter,r-l+1);
            continue;
        }
     //  if(l==s.size()&&r==s.size())break;
    }
  if(counter==1e7)  cout<<0<<endl;
  else cout<<counter<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
  //  solve();
}

