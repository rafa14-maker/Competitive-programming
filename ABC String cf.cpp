#include<bits/stdc++.h>
using namespace std;

bool f(string frr)
{
   // cout<<1<<endl;
   vector<char>v;
   for(int i=0;i<frr.size();i++)
    {
        if(frr[i]=='(')v.push_back(frr[i]);
        else
        {
            char p='a' ;
            if(v.size()>0)
            {
                int len=v.size()-1;
                p=v[len];
            }
            if(p=='(')v.pop_back();
            else v.push_back(')');
        }
    }
    if(v.size()==0)return true;
    else return false;
}

void solve()
{
    string s;
    cin>>s;

     bool tr=false;

     for(int a=0;a<=1;a++)
     {
         for(int b=0;b<=1;b++)
         {
             for(int c=0;c<=1;c++)
             {
                // cout<<1<<endl;
                 char ak,bk,ck;
                 if(a==0)ak=')';
                 else ak='(';
                 if(b==0)bk=')';
                 else bk='(';
                 if(c==0)ck=')';
                 else ck='(';

                 string frr;

                 for(int i=0;i<s.size();i++)
                 {
                     if(s[i]=='A')frr+=ak;
                     else if(s[i]=='B')frr+=bk;
                     else frr+=ck;
                 }

                 if(f(frr))tr=true;
             }
         }
     }

     if(tr)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
