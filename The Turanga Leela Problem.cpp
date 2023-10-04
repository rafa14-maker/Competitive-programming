#include<bits/stdc++.h>
using namespace std;

int main()
{
   while(1)
   {
       long long a,b;
       cin>>a>>b;
       if(a==0&&b==0)break;
       long long n = abs(a-b);

       vector<int>v;

       for(int i=2;i<=sqrt(n);i++)
       {
           if(n%i==0)
           {
               v.push_back(n/i);
               if(n/i!=(n/(n/i)))v.push_back(n/(n/i));
           }
       }
       if(n==1)cout<<1<<endl;
       else cout<<v.size()+2<<endl;
   }
}
