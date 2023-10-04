#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<long long>v;
    int k=1;
    while(k<1e9)
    {
       k*=2;
       v.push_back(k);
    }
 //cout<<v.size()<<endl;
//    for(int i=0;i<v.size();i++)cout<<v[i]<<endl;

   int counter=0;
   map<int,int>m;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {cin>>arr[i];
    m[arr[i]]++;

        }


   for(int i=0;i<n;i++)
   {
       int flag=0;
       for(int j=0;j<v.size();j++)
       {
           if(v[j]>=arr[i])
           {
               int sum=v[j]-arr[i];
               if(sum==arr[i])
               {
                   if(m[arr[i]]>1)
                   {
                       flag++;
                       break;
                   }
               }
               else if(m[sum]>0)
               {
                   flag++;
                   break;
               }
           }
       }
       if(flag==0)counter++;
   }
   cout<<counter<<endl;

}
