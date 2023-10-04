#include<bits/stdc++.h>
using namespace std;

double arr[]={0,10,15,20,25};
double frr[]={180000,300000,400000,300000};


void solve(int t)
{
    double n,p;
    cin>>n;
    p=n;
    double sum=0;

   for(int i=0;i<5;i++)
   {
       if(n<=0)break;
       double k;
       if(i<4&&n>frr[i])k=frr[i];
       else k=n;
       sum+=((arr[i]/100)*k);
       if(i<4)n-=frr[i];
   }


    printf("Case %d: ",t);
    if(p<=frr[0])cout<<0<<endl;
    else if(sum<=2000&&p>frr[0])cout<<2000<<endl;
     else printf("%lld\n",(long long int)ceil(sum));
}


int main()
{
    int q;cin>>q;
    for(int i=1;i<=q;i++)solve(i);
}
