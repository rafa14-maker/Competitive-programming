#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long a,b;
    cin>>a>>b;
    char c;
    long long  arr[26];
    for(int i=0;i<26;i++)arr[i]=0;

    for(int i=0;i<a;i++)
    {
       cin>>c;
       arr[c-'A']++;
    }
    long long  sum=0;
   sort(arr,arr+26);

   for(int i=25;b>0;i--)
   {
       long long  m=min(arr[i],b);
       b-=m;
       sum+=m*m;
   }

   cout<<sum<<endl;
    return 0;
}

