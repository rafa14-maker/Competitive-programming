#include<bits/stdc++.h>
using namespace std;

bool match(string a,string b)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A'&&a[i]<='Z')a[i]+=32;
    }
     for(int i=0;i<b.size();i++)
    {
        if(b[i]>='A'&&b[i]<='Z')b[i]+=32;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}

int main()
{
    vector<string>v;
    while(1)
    {
      char s[100];
      gets(s);
        if(s[0]=='#')break;
        string frr="";
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]!=' ')frr+=s[i];
            else
            {
                if(frr.size()>0)
                {
                    v.push_back(frr);
                }
                frr="";
            }
        }
        if(frr.size()>0)
                {
                    v.push_back(frr);
                }
    }
    vector<string>vs;
   for(int i=0;i<v.size();i++)
   {
       bool tr=true;
       for(int j=0;j<v.size();j++)
       {
           if(i!=j&&match(v[i],v[j]))tr=false;
       }
       if(tr)vs.push_back(v[i]);
   }

   sort(vs.begin(),vs.end());

   for(int i=0;i<vs.size();i++)cout<<vs[i]<<endl;

}
