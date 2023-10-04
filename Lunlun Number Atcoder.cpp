#include<bits/stdc++.h>
using namespace std;

set<string>st;

void f(string s)
{
   // cout<<s<<endl;
    if(s.size()>=11)return ;
   if(s[0]=='0')return;
    int flag=0;

    for(int i=0;i<s.size();i++)
    {
       // if(i+1<s.size()&&s[i]==s[i+1])flag++;
         if(i+1<s.size()&&abs(s[i]-s[i+1])>1)flag++;
    }

    if(flag>0)return ;
//cout<<s<<endl;
    st.insert(s);

        for(char i='0';i<='9';i++)
        {
            f(s+i);
        }
}


int main()
{
    string s="";
    f(s);
    vector<long long>v;
    for(auto it=st.begin();it!=st.end();it++)
    {
       long long num=0;
       string r=*it;
       reverse(r.begin(),r.end());
       long long p=1;
       for(int i=0;i<r.size();i++)
       {
           num+=p*(char(r[i]-'0'));
           p*=10;
       }
       v.push_back(num);
    }
  sort(v.begin(),v.end());
int n;
cin>>n;
cout<<v[n]<<endl;

}
