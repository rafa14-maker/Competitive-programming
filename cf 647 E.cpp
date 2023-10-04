#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void solve()
{
   ll a,b;
   cin>>a>>b;
   if(a<b)
   {
       if(b%a!=0)
       {
           cout<<-1<<endl;
           return ;
       }
   }
   else if(a>b)
   {
       if(a%b!=0)
       {
            cout<<-1<<endl;
           return ;
       }
   }
   if(a==b)
   {
       cout<<0<<endl;
       return;
   }

   if(a>b)swap(a,b);

   ll k=b/a;
//cout<<k<<endl;
   int counter=0;

   while(k>0)
   {
       if(k%2==0)
       {
           k/=2;
           counter++;
       }
       else break;
   }

   if(k>1)
   {
       cout<<-1<<endl;
       return ;
   }
  //cout<<counter<<endl;
   int flag=0;
   if(counter>=3)
   {
       int a=counter/3;
       flag+=a;
       counter-=(a*3);
   }
   if(counter>=2)
   {
       int a=counter/2;
       flag+=a;
       counter-=(a*2);
   }

   cout<<flag+counter<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}
