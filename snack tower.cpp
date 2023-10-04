#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],frr[i]=arr[i];
  vector<int>v;
     for(int i=0;i<n;i++)
     {
         int flag=0;
         for(int j=i+1;j<n;j++)
         {
             if(arr[j]>arr[i])
             {
                 flag++;
                 v.push_back(arr[i]);
            cout<<endl;
             break;}
         }
         if(flag==0)
         {
             v.push_back(arr[i]);
             sort(v.begin(),v.end());
             while(!v.empty())
             {
                 int f=v.back();
                 cout<<f<<" ";
                 v.pop_back();
             }
             cout<<endl;
         }
     }
}
