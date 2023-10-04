#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];

   vector<int>v;

   int frr[n+5]={0};
   int krr[n+5]={0};

   for(int i=1;i<=n;i++)frr[arr[i]]++;

   for(int i=1;i<=n;i++)
   {
       if(frr[i]==0)
       {
           krr[i]++;
           v.push_back(i);
       }
   }

   sort(v.begin(),v.end());

   int counter=0;

   for(int i=1;i<=n;i++)
   {
       if(arr[i]==0)
       {
           arr[i]=v[counter];
           counter++;
       }
   }

  // for(int i=1;i<=n;i++)cout<<arr[i]<<" ";

   for(int i=1;i<=n;i++)
   {
       if(arr[i]==i)
       {
           for(int j=1;j<=n;j++)
           {
               if(arr[j]!=arr[i]&&krr[arr[j]]>0&&krr[arr[i]]>0)
               {
                   swap(arr[j],arr[i]);
                   break;
               }
           }
       }
   }
for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
}
