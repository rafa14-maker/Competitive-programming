#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
   string arr;
   cin>>arr;
   int idx=0,one=0,two=0;
   for(int i=0;i<arr.size();i++)
   {
       if(i+1<arr.size()&&arr[i]!=arr[i+1])idx++;
       if(arr[i]=='1')one++;
       else two++;
   }
    int sum=1e7;

    for(int i=0;i<arr.size();i++)
    {
        int counter=0,flag=0;
        for(int j=i-1;j>=0;j--)if(arr[i]!=arr[j])counter++;
        for(int j=i+1;j<arr.size();j++)if(arr[i]==arr[j])counter++;

        for(int j=i-1;j>=0;j--)if(arr[i]!=arr[j])flag++;
        for(int j=i+1;j<arr.size();j++)if(arr[i]==arr[j])flag++;

        sum=min(sum,counter);
        sum=min(sum,flag);
    }
    cout<<sum<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
   //solve();
}

