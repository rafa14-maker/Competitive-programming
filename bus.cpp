#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,f,k;
    cin>>a>>b>>f>>k;
    long long flag=0,counter=0;
    if(b<f)return cout<<-1,0;

    long long p=b,d=a-f;

   for(int i=1;i<=k;i++)
   {
       p-=f;
       if(p<0)return cout<<-1,0;
       if(p<2*d&&i!=k||p<d)counter++,p=b;
       p-=d;
       if(p<0)return cout<<-1,0;
       swap(f,d);
   }

   if(p<0)return cout<<-1,0;

    cout<<counter<<endl;
}
