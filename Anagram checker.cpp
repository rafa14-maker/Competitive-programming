#include<bits/stdc++.h>
using namespace std;

vector<string>vs;
    vector<string>vcom;
    vector<string>kcom;
  set<string>v;
void pri(string a,string b)
{
    if(a==" "||b==" ")return;
    string s="";
    s+=a;
    s+=' ';
    s+='=';
    s+=' ';
    s+=b;
    v.insert(s);
}

void f1(string s)
{
  string krr;

  for(int i=0;i<s.size();i++)if(s[i]!=' ')krr+=s[i];

  sort(krr.begin(),krr.end());

 // cout<<krr<<endl;

    for(int i=0;i<kcom.size();i++)
    {
        if(krr!=" "&&krr==kcom[i])
        {
            pri(vcom[i],s);
        }
    }
}


void dp(int pos,string s)
{
    if(pos>vs.size())return;
   if(s.size()>0) f1(s);
 //   cout<<s<<endl;
    string krr=s;
    s+=' ';
    s+=vs[pos];
    dp(pos+1,krr);
    dp(pos+1,s);
}


int main()
{

    while(1)
    {
        string s;
        cin>>s;
        if(s=="#")break;
        vs.push_back(s);
    }

    while(1)
    {
       string sk;
       getline(cin,sk);
       if(sk=="#")break;
        string s,k;
        for(int i=0;i<sk.size();i++)
        {
            if(sk[i]!=' ')k+=sk[i];
            s+=sk[i];
        }
        sort(k.begin(),k.end());
        vcom.push_back(s);
        kcom.push_back(k);
    }

  // for(int i=0;i<kcom.size();i++)cout<<vcom[i]<<" "<<kcom[i]<<endl;*/
string kp;
dp(0,kp);


   for(auto it=v.begin();it!=v.end();it++)cout<<*it<<endl;

}
