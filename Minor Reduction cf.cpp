#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string f(char a,char b)
{
    int ak = (int)(a-'0');
    int bk = (int)(b-'0');
    int ck = ak+bk;
    string s;
    while(ck>0)
    {
        int r = ck%10;
        ck/=10;
        s += (char)('0'+r);
    }
    reverse(s.begin(),s.end());
    return s;
}

string con(string s,int a,int b)
{
    string frr;
    for(int i=0;i<s.size();i++)
    {
        if(i==a||i==b)
        {
            frr += f(s[a],s[b]);
            i++;
        }
        else frr+=s[i];
    }
    return frr;
}

string mx(string a,string b)
{
    if(a.size()>b.size())return a;
    else if(a.size()==b.size())return max(a,b);
    return b;
}

void solve()
{
   // cout<<"yes"<<endl;

   string s;
   cin>>s;

  string frr,krr;

   for(int i=s.size()-1;i>=1;i--)
   {
       if(i-1>=0)
       {
           frr = con(s,i,i-1);
           break;
       }
   }



   for(int i=0;i<s.size();i++)
   {
       if(i+1<s.size())
       {
           krr = con(s,i,i+1);
           break;
       }
   }

   cout << mx(frr,krr) <<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

