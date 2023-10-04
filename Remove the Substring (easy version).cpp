#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,s;
    cin>>arr>>s;
    int counter=arr.size(),k=s.size(),l=-1,r=-1;
    for(int i=0;i<=arr.size()-k;i++)
    {
       string h;
       for(int j=i;j<i+k;j++)
       {
           h+=arr[j];
       }
       if(h==s)
       {
           l=i;
           break;
       }
    }

    r=l+k;
   // cout<<l<<" "<<r<<endl;
      int flag=0;
      counter=0;
      for(int i=l-1;i>=0;i--)counter++;
      for(int i=r;i<arr.size();i++)flag++;
      cout<<max(flag,counter);
}
