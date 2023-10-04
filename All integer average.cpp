#include<bits/stdc++.h>
using namespace std;

int getNumLen(int n) {
    char m[15];
    sprintf(m, "%d", n);
    return strlen(m);
}

void pri_1(int a,int b,int c,bool tr)
{
    if(a<0)a*=(-1);
    if(b<0)b*=(-1);
    if(c<0)c*=(-1);

    int counter=getNumLen(c);
    int flag=getNumLen(b);
    int cnt=getNumLen(a);


   if(!tr) putchar(' '),putchar(' ');
   for(int i=1;i<=counter-flag+cnt;i++) putchar(' ');
   cout<<b<<endl;

   if(!tr)  printf("- ");
   cout<<a;
   for(int i=1;i<=counter;i++)putchar('-');
   cout<<endl;

   if(!tr) putchar(' '),putchar(' ');
   for(int i=1;i<=cnt;i++) putchar(' ');
   cout<<c<<endl;
}
void pri_2(int b,int c,bool tr)
{
    if(b<0)b*=(-1),tr=false;
    if(c<0)c*=(-1),tr=false;

     int counter=getNumLen(c);
    int flag=getNumLen(b);
   // int cnt=getNumLen(a);




    if(!tr) putchar(' '),putchar(' ');
    for(int i=1;i<=counter-flag;i++) putchar(' ');
    cout<<b<<endl;
    if(!tr)  printf("- ");
    for(int i=1;i<=counter;i++)putchar('-');
    cout<<endl;
    if(!tr)putchar(' '),putchar(' ');
    cout<<c<<endl;
}

void solve(int n,int k,int test)
{
      printf("Case %d:\n",test);

       bool tr=true;
    if(k<0&&n>0||n<0&&k>0)tr=false;

      if(k<0)k*=(-1);

    if(k==0)
    {
        cout<<0<<endl;
        return;
    }
      int g=__gcd(n,k);
    n/=g;
    k/=g;
    if(n==1)
    {
        if(!tr)cout<<"- ";
        cout<<k<<endl;
        return;
    }


    int a=k/n,b=k%n,c=n;

   // cout<<a<<" "<<b<<" "<<c<<" "<<n<<" "<<k<<endl;

    if(a==0)pri_2(b,c,tr);
    else pri_1(a,b,c,tr);
}

int main()
{
    int test=0;
    while(1)
    {
       int n;
       cin>>n;
       if(n==0)break;
       test++;
       int sum=0;
       for(int i=0;i<n;i++)
       {
           int a;
           cin>>a;
           sum+=a;
       }
       solve(n,sum,test);
    }
}
