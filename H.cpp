#include<bits/stdc++.h>
using namespace std;

int mn;

bool check(string a,string b,string c)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[i]||b[i]==c[i]||c[i]==a[i])return false;
    }
    return true;
}

void fun(string a,string b,string c)
{
    vector<pair<string,int> >va,vb;

    va.push_back(make_pair(a,0));
    vb.push_back(make_pair(b,0));

    for(int i=0;i<a.size();i++)
    {
        int len = a.size()-1;
        char f = a[len];
        for(int j=len;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=f;
      //  cout<<a<<endl;
        va.push_back(make_pair(a,i+1));
    }
      for(int i=0;i<b.size();i++)
       {
        int len = b.size()-1;
        char f = b[len];
        for(int j=len;j>0;j--)
        {
            b[j]=b[j-1];
        }
        b[0]=f;
        //cout<<b<<endl;
        vb.push_back(make_pair(b,i+1));
      }

    for(int i=0;i<va.size();i++)
    {
        for(int j=0;j<vb.size();j++)
        {
            string as = va[i].first;
            string bs = vb[j].first;
            if(check(as,bs,c))
            {
                int kp = va[i].second;
                int len = as.size();
                kp = min(kp,len-kp);
                int pk = vb[j].second;
                pk = min(pk,len-pk);
                mn=min(mn,kp+pk);
            }
        }
    }

}

void solve()
{
    string a,b,c;
    cin>>a>>b>>c;

   mn = 1e9;

   fun(a,b,c);
 //  fun(c,a,b);
//   fun(b,a,c);
   fun(b,c,a);
   fun(a,c,b);
//   fun(c,b,a);
   if(mn==1e9)printf("-1\n");
   else printf("%d\n",mn);

  //  cout<<check(a,b,c)<<endl;

}

int main()
{
    solve();
}
