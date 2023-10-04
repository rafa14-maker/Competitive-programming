#include<bits/stdc++.h>
using namespace std;

string arr[105];

int check(string krr,string frr)
{
    if(krr.size()>frr.size())
        return -1;
    if(krr.size()==frr.size())
       {
           if(krr==frr)return 1;
           else return -1;
       }

   long long sum=0;

   for(int i=0;i<krr.size();i++)
   {
       sum+=krr[i];
   }
    //cout<<sum<<endl;
    int flag=0;

    for(int i=0;i<krr.size();i++)
    {
        flag+=frr[i];
    }
    //cout<<flag<<endl;
    if(sum==flag)return 1;

    for(int i=krr.size(),j=0;j<i,i<frr.size();i++,j++)
    {
        flag-=frr[j];
        flag+=frr[i];
        if(sum==flag)
        {
            return 1;
        }
     //   cout<<flag<<endl;
    }

    return -1;

}

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
          if(check(arr[i],arr[j])==1)
          {
              swap(arr[i],arr[j]);
          }
       }
   }

 //  for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;

   int counter=0;

   for(int i=0;i<n-1;i++)
   {
       if(check(arr[i],arr[i+1])==-1)
       {
           counter++;
           break;
       }
   }

   if(counter>0)
   {
       cout<<"NO"<<endl;
   }
   else
   {
       cout<<"YES"<<endl;
       for(int i=0;i<n;i++)cout<<arr[i]<<endl;
   }

}
