#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,n;
    cin>>d>>n;
   vector<int>v;
   for(int i=1;i<=1e7;i++)
   {
       int counter=0;
       int a=i;
       while(a%100==0)
       {
           a/=100;
           counter++;
       }
       if(counter==d)v.push_back(i);
   }
   sort(v.begin(),v.end());
   cout<<v[n-1]<<endl;
}
