#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    set<int>st;
    int n=a;
    for(int i=2;i<sqrt(n);i++)
    {
        if(a==1)break;
        bool tr=false;
        while(a%i==0)
        {
          if(!tr)
          {
              tr=true;
              st.insert(a);
          }
            a/=i;
        }
    }
    if(a!=1)st.insert(a);
    n=b;
    for(int i=2;i<sqrt(n);i++)
    {
        if(b==1)break;
        bool tr=false;
        while(b%i==0)
        {
            if(!tr)
          {
              tr=true;
              st.insert(a);
          }
           // st.insert(b);
            b/=i;
        }
    }
    if(b!=1)st.insert(b);
    cout<<st.size()<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
