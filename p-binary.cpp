#include<bits/stdc++.h>
using namespace std;

vector<long long>v;
long long n,p;

int flag=1e9;


void f(int pos,long long sum,int counter)
{
    if(pos>=v.size())return ;
    if(sum>n)return ;
    if(sum==n)
    {flag=min(flag,counter);
    return ;
    }

  if(v[pos]!=0&&(n-sum)%v[pos]==0)
  {
      int c=(n-sum)/v[pos];
      if(c<0)c*=(-1);
    //  cout<<c<<endl;
      flag=min(flag,c+counter);
  }

 // cout<<sum<<endl;
    f(pos+1,sum+v[pos],counter+1);
   // f(pos+1,sum+v[pos],counter+1,tot%v[pos]);
    f(pos+1,sum,counter);

}

int main()
{
   int k=1;
   while(k<=1e9)
   {
     v.push_back(k);
     k*=2;
   }

  // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
  // int n,p;
   scanf("%lld %lld",&n,&p);

   if(n==1&&k==1)
   {
       cout<<-1<<endl;
       return 0;
   }

   for(int i=0;i<v.size();i++)
   {
       v[i]+=p;
   }

    f(0,0,0);
   if(flag==1e9)printf("-1\n");
   else printf("%lld\n",flag);

}
