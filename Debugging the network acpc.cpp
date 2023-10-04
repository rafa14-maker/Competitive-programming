#include<bits/stdc++.h>
using namespace std;

string s,frr;
int m;

void dk(int k)
{
    int cnt=0;
    while(k>0)
    {
        cnt++;
        k/=10;
    }
    m=cnt;
}

void solve()
{
    cin>>s;
    int k;
    cin>>k;
    dk(k);

    frr="";

    bool tr=true;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            string krr;
            int j;
            for( j=i;j<s.size();j++)
            {
                if(s[j]>='0'&&s[j]<='9')krr+=s[j];
                else break;
            }
            //cout<<krr<<endl;
            if(krr.size()<=m)
            {
                int pk=0;
               // int ck=1;
                reverse(krr.begin(),krr.end());
                for(int b=0;b<krr.size();b++)
                {
                    pk*=10;
                    pk+=(int)(krr[b]-'0');
                  //  pk*=10;
                }
               // cout<<krr<<" "<<pk<<endl;
                if(pk<=k)
                {
                    for(int c=0;c<pk;c++)
                    {
                        frr+=s[j];
                    }
                   // k-=pk;
                }
                else tr=false;
            }
            else tr=false;
            i=j;
        }
        else
        {
            frr+=s[i];
        }
    }
   // cout<<frr<<endl;
    if(tr&&frr.size()<=k)cout<<frr<<"\n";
    else cout<<"unfeasible"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
