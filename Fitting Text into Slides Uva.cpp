#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    cin.ignore();
    int m=0;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)if(s[i]!=' ')counter++;
        int len=s.size();
        m=max(len,m);
    }
    int k,p;
    cin>>k>>p;
    int idx=0;
   for(int i=8;i<=30;i++)
   {
       if(i*i*counter<=k*p)idx=i;
   }
   if(idx>28||idx<8)cout<<"No solution"<<endl;
   else cout<<idx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
