#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int one,zero;
   cin>>zero>>one;
   string s;
   cin>>s;
   int one_mn=0,zero_mn=0;

   for(int i=0,j=s.size()-1;i<=j;i++,j--)
   {
       if(i!=j)
       {
           if(s[i]!='?'&&s[j]!='?')
           {
               if(s[i]=='1')one_mn+=2;
               else zero_mn+=2;
           }
           else if(s[i]!='?'&&s[j]=='?')
           {
               if(s[i]=='1')one_mn+=2;
               else zero_mn+=2;
               s[j]=s[i];
           }
           else if(s[i]=='?'&&s[j]!='?')
           {
                if(s[j]=='1')one_mn+=2;
               else zero_mn+=2;
               s[i]=s[j];
           }
       }
       else
       {
           if(s[i]!='?')
           {
               if(s[i]=='1')one_mn+=1;
               else zero_mn+=1;
           }
       }
   }
 //  cout<<s<<endl;

   for(int i=0,j=s.size()-1;i<=j;i++,j--)
   {
       if(i!=j&&s[i]=='?'&&s[j]=='?')
       {
           if(one_mn+2<=one)
           {
               s[i]='1';
               s[j]='1';
              one_mn+=2;
           }
           else if(zero_mn+2<=zero)
           {
               s[i]='0';
               s[j]='0';
               zero_mn+=2;
           }
       }
       else if(i==j&&s[i]=='?')
       {
            if(one_mn+1<=one)
           {
               s[i]='1';
               s[j]='1';
              one_mn+=1;
           }
           else if(zero_mn+1<=zero)
           {
               s[i]='0';
               s[j]='0';
               zero_mn+=1;
           }
       }
   }

   bool tr=true;
  // cout<<zero_mn<<" "<<one_mn<<endl;
   int a=0,b=0;

   for(int i=0,j=s.size()-1;i<=j;i++,j--)
   {
       if(s[i]!=s[j]||s[i]=='?'||s[j]=='?')tr=false;

       if(i!=j)
       {
           if(s[i]=='1')a+=2;
           else b+=2;
       }
       else
       {
           if(s[i]=='1')a+=1;
           else b+=1;
       }
       }
  // cout<<b<<" "<<a<<" "<<s<<endl;
   if(!tr||one<a||zero<b)cout<<-1<<endl;
   else cout<<s<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
