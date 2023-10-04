#include<bits/stdc++.h>
using namespace std;

void f(stringstream &ss,int t1,int t2=-1)
{
    if(t2==-1)
    {
        ss<<t1<<endl;
    }
    else
    {
        ss<<t1<<" "<<t2<<endl;
    }
}

void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   sort(arr,arr+n);
   stringstream ss;
   long long tot=0;

           int m=n;
           while(m>=4)
           {
               int a=arr[0],b=arr[1],c=arr[m-1],d=arr[m-2];
               if(a+a+c+d<b+b+a+c)
               {
                   tot+=a+a+c+d;
                   f(ss,arr[0],arr[m-1]);
                   f(ss,arr[0]);
                   f(ss,arr[0],arr[m-2]);
                   f(ss,arr[0]);
               }
               else
               {
                   tot+=b+b+a+c;
                    f(ss,arr[0],arr[1]);
                   f(ss,arr[0]);
                   f(ss,arr[m-2],arr[m-1]);
                   f(ss,arr[1]);
               }
               m-=2;
           }

           if(m==1)
       {
           tot+=arr[0];
           f(ss,arr[0]);
       }
       else if(m==2)
       {
           tot+=arr[1];
           f(ss,arr[0],arr[1]);
       }
       else if(m==3)
       {
           tot+=arr[0]+arr[1]+arr[2];
           f(ss,arr[0],arr[1]);
           f(ss,arr[0]);
           f(ss,arr[0],arr[2]);
       }
       cout<<tot<<endl;
       cout<<ss.str();
}

int main()
{
  int q;
  cin>>q;
  while(q--)
  {
      solve();
      if(q)cout<<endl;
  }
}
