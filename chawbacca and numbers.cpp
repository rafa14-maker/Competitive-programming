#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
   for(int i=0;i<arr.size();i++)
   {
    int k=arr[i]-'0';
    k=min(k,9-k);
    if(k==0&&i==0)
    {
          continue;
    }
    else
    {
        arr[i]=k+'0';
    }
   // cout<<k<<endl;
   }
cout<<arr<<endl;
}
