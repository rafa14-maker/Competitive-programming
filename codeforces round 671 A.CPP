#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int odd1=0,odd2=0,ev1=0,ev2=0;
   for(int i=0;i<n;i++)
   {
       int k=(int)s[i]-'0';
       if(i%2==0)
       {
           if(k%2==0)ev1++;
           else odd1++;
       }
       else
       {
            if(k%2==0)ev2++;
           else odd2++;
       }
   }
   while(1)
   {
       if(ev1+odd1+ev2+odd2==1)break;
       if(ev1>0)ev1--;
       else if(odd1>0)odd1--;
       if(ev1==0&&odd1==0)break;
       if(odd2>0)odd2--;
       else if(ev2>0)ev2--;
   }
   if(ev1>=1||ev2>=1)cout<<"2"<<endl;
   else cout<<"1"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //solve();
}
