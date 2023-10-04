#include<bits/stdc++.h>
using namespace std;
using ll =long long;

string s;
vector<char>vs;
    vector<ll>v;

void built()
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='*'||s[i]=='+')
        {
            vs.push_back(s[i]);
            ll sum=0,idx=1;
            for(int j=i-1;j>=0;j--)
            {
                if(s[j]=='*'||s[j]=='+')break;
                ll k=(int)s[j]-'0';
                ll kp=k*idx;
             //   sum*=10;
                sum+=kp;
                idx*=10;
            }
              v.push_back(sum);
        }

    }
    ll sum=0,idx=1;
     for(int j=s.size()-1;j>=0;j--)
            {
                if(s[j]=='*'||s[j]=='+')break;
                ll k=(int)s[j]-'0';
                ll kp=k*idx;
             //   sum*=10;
                sum+=kp;
                idx*=10;
            }
    v.push_back(sum);

   // for(int i=0;i<vs.size();i++)cout<<vs[i]<<" ";cout<<endl;
   // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
}

ll f()
{
    vector<ll>frr;
    frr=v;
    for(int i=0;i<frr.size();i++)
    {
        if(vs[i]=='*')
        {
            frr[i+1]*=frr[i];
            frr[i]=0;
        }
    }
    ll sum=0;
    for(int i=0;i<frr.size();i++)sum+=frr[i];
   return sum;
}

ll f1()
{
     vector<ll>frr;
    frr=v;
    for(int i=0;i<frr.size();i++)
    {
        if(vs[i]=='+')
        {
            frr[i+1]+=frr[i];
            frr[i]=0;
        }
    }
    ll sum=1;
    for(int i=0;i<frr.size();i++)if(frr[i]>0)sum*=frr[i];
    return sum;
}


void solve()
{
    vs.clear();
    v.clear();
    cin>>s;
    built();
    printf("The maximum and minimum are %lld and %lld.\n",f1(),f());
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
