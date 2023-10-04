#include<bits/stdc++.h>
using namespace std;

int main()
{
    int op;
    cin>>op;
    for(int h=1;h<=op;h++)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<long long>sub;
    for(int i=0;i<pow(2,n);i++)
    {
        long long sum=0;
        vector<long long>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
              v.push_back(arr[j]);
            }
        }
         for(int j=0;j<v.size();j++)
         {
            sum+=v[j];
         }
         sub.push_back(sum);
        // cout<<endl;
    }
    int g=sub.size();
  for(int i=0;i<g;i++)
  {
     sub.push_back(sub[i]*2);
  }


    }
}
