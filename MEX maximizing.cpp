#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int>v;
    while(n--)
    {
      int a;
      cin>>a;
      a=a%k;
     // v.push_back(a);
      int i=a;
       int flag=0,uo=0;
      while(1)
      {
       //   cout<<i<<" op"<<endl;
          //i+=k;
          int l=0,r=v.size()-1;
          while(l<=r)
          {
              int mid=(l+r)/2;
              if(v[mid]==i)
              {
                  flag++;
                  break;
              }
              else if(v[mid]>i)r=mid-1;
              else l=mid+1;
          }
         if(flag==0)
         {
            // cout<<"YES"<<endl;
             flag++;
             v.push_back(i);
             break;
         }
         i+=k;
         flag=0;
      }
      //if(uo==0)v.push_back(i);
      sort(v.begin(),v.end());
      int c=0;

    //  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
      for(int i=0;i<v.size();i++)
      {
          if(v[i]==c)
          {
              c++;
          }
      }
      cout<<c<<endl;
    }
}
