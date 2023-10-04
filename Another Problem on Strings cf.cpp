#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            v.push_back(i);
    }

    if(n==0)
    {
        ll sum=0,cnt=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')cnt++;
            else
            {
                sum+=(cnt*(cnt+1))/2;
                cnt=0;
            }
        }

        if(cnt>0)
        {
            if(cnt==1)sum+=1;
            else sum+=(cnt*(cnt+1))/2;
        }
          cout<<sum<<"\n";
        return ;
    }

   // int l=0,r=0;
   ll sum=0;

    for(int i=0;i<v.size();i++)
    {
        if(i+n-1<v.size())
        {
            ll a=0,b=0;
            if(i+n<v.size())a = v[i+n]-v[i+n-1]-1;
            else if(i+n-1==v.size()-1)a = s.size()-v[i+n-1]-1;
            if(i-1>=0)b = v[i]-v[i-1]-1;
            else if(i==0) b = v[i];
          //  sum+=(2*a*b);

        //  cout<<a<<" "<<b<<endl;
          if(a==0&&b==0)sum+=1;
          else if(a>0&&b>0)
          {
              if(a==1||b==1)sum+=(a+b)*2;
              else  sum+=(a*b*2);
          }
          else if(a>0)sum+=a+1;
          else if(b>0) sum+=b+1;
        }
    }
    cout<<sum<<endl;
}

int main()
{
    solve();
}
