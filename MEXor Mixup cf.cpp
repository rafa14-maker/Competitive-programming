#include<bits/stdc++.h>
using namespace std;

const int N = 3*1e5+5;
int arr[N];

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}

void f()
{
    arr[0]=0;
    for(int i=1;i<=N;i++)
    {
        arr[i] = i ^ arr[i-1];
    }
}

void solve()
{
  //  f();
    int a;
    int b;
    cin>>a>>b;
   int  sum = arr[a-1];

   if(sum==b)
   {
       cout<<a<<endl;
       return;
   }

   int r=0;
   int req = a+1;

   for(int i=0;i<=30;i++)
   {
       if(Check(b,i)!=Check(sum,i))r = Set(r,i);
   }

   if(r==a)req++;

   cout<<req<<endl;

}

int main()
{
    f();
    int q;
    cin>>q;
    while(q--)solve();
}
