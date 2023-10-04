#include<bits/stdc++.h>
using namespace std;

string s;

void solve()
{
    string frr;
    cin>>frr;
   int idx=0,idx1=-1,p;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]==frr[idx])
       {
           idx++;
           p=i;
           if(idx==frr.size())break;
           if(idx1==-1)idx1=i;
       }
   }
   if(idx==frr.size())
   {
       printf("Matched %d %d\n",idx1,p);
   }
   else
   {
       printf("Not matched\n");
   }
}

int main()
{
    cin>>s;
    int q;
    cin>>q;
    while(q--)solve();
}
