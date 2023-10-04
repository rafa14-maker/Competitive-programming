#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    int n,m;
    cin>>n>>m;

   vector<int>v;
   for(int i=1;i<=2*m;i+=2)
   {
       v.push_back(i);
   }
   for(int i=2;i<=2*n;i+=2)
   {
         v.push_back(i);
   }

   for(int i=0;i<v.size();i++)
   {
       for(int j=i+1;j<v.size();j++)
       {
           if((v[i]+v[j])%2==0)counter++;
       }
   }
   cout<<counter<<endl;
}
