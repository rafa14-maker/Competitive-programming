#include<bits/stdc++.h>
using namespace std;

vector<string>vs;
vector<int>frr;

void cal(string s,int k)
{
    set<char>st;
    for(int i=0;i<s.size();i++)
    {
        int j;
        string pk;
        st.clear();
        for(j=i;j<i+k;j++)
        {
           st.insert(s[j]);
        }
        i=j-1;
        frr.push_back(st.size());
        for(auto it=st.begin();it!=st.end();it++)
        {
            pk+= *it;
        }
        vs.push_back(pk);
    }
}

int dp[1005][30][30];

int f(int pos,char c,char ck)
{
   // cout<<pos<<" "<<c<<endl;
    if(pos==vs.size())
    {
        return 0;
    }

    int k = (int)(c-'a');
    int kp = (int)(ck-'a');
    if(c == '0')k = (int)(c-'0'),kp = (int)(ck-'0');
    if(c != '0'&& dp[pos][k][kp] != -1)return dp[pos][k][kp];

    int ans = 1e9;

    for(int i=0;i<vs[pos].size();i++)
    {
        char p = vs[pos][i];
        char pk;

        for(int j=0;j<vs[pos].size();j++)
        {
            if(vs[pos][j]!=p||vs[pos].size()==1)
            {
                pk = vs[pos][j];


                if(p==ck)
               {
           if(ans!=-1) ans=min(ans,f(pos+1,p,pk)+frr[pos]-1);
           else ans=f(pos+1,p,pk)+frr[pos]-1;
                  }
               else
                 {
         if(ans!=-1)  ans=min(ans,f(pos+1,p,pk)+frr[pos]);
         else  ans=f(pos+1,p,pk)+frr[pos];
                  }


            }
        }

    }

    return dp[pos][k][kp]=ans;

}


void solve()
{
    vs.clear();
    frr.clear();
    int k;
    string s;
    cin>>k>>s;
    cal(s,k);
    memset(dp,-1,sizeof dp);
  //  for(int i=0;i<vs.size();i++)cout<<vs[i]<<" ";cout<<endl;
  //   for(int i=0;i<vs.size();i++)cout<<frr[i]<<" ";cout<<endl;
  cout<<f(0,'0','0')<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
3 abacbbabb

*/
