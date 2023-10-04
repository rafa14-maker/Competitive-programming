#include<bits/stdc++.h>
using namespace std;

map<string,string>mp;
map<string,int>mn;

string fin(string n)
{
    if(mp[n]==n)return n;
    return mp[n] = fin(mp[n]);
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
         mn.clear();
            mp.clear();
        int n;
        cin>>n;
        int counter=0;
        while(n--)
        {

            string a,b;
            cin>>a>>b;

          string c = fin(a);
          string  d = fin(b);

         if(c==""&&d=="")
         {
             cout<<2<<endl;
             mp[a]=a;
             mp[b]=a;
             mn[a]=2;
         }
         else if(c!=""&&d=="")
         {
             mp[b]=c;
             mn[c]++;
             cout<<mn[c]<<endl;
         }
         else if(d!=""&&c=="")
         {
             mp[a]=d;
             mn[d]++;
             cout<<mn[d]<<endl;
         }
         else if(d==c)continue;
         else
         {
             mn[c]+=mn[d];
             mn[d]=0;
             mp[d]=c;
             cout<<mn[c]<<endl;
         }

        }
    }
}
