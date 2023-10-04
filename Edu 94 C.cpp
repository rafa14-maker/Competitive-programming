#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n=s.size();
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)arr[i]=5,frr[i]=5;
    bool tr=false;
    for(int i=0;i<n;i++)
    {
        if(i-k>=0&&s[i-k]=='1')arr[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(i+k<n&&s[i+k]=='1')frr[i]=1;
    }

    string f;
    for(int i=0;i<s.size();i++)
    {
        if(arr[i]==1||frr[i]==1)f+='1';
        else f+='0';
    }

     for(int i=0;i<s.size();i++)
     {
         if(s[i]=='0')
         {
             if(i+k<s.size()&&f[i+k]!='0'&&i-k>=0&&f[i-k]!='0')tr=true;
             if(i==s.size()-1&&i-k>=0&&f[i-k]!='0')tr=true;
             if(i==0&&i+k<s.size()&&f[i+k]!='0')tr=true;
         }
     }

     if(tr||f.size()==0)
     {
         cout<<-1<<endl;
         return;
     }
    cout<<f<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  //solve();
}
