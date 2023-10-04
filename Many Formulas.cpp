#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    reverse(arr.begin(),arr.end());
    int n=arr.size()-1;
    long long sum=0;
    for(int i=0;i<pow(2,n);i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))v.push_back(j);
        }
       long long flag=0;
       int index =0;
       for(int u=0;u<v.size();u++)
       {
           int k = v[u];
           long long num=0,r=1;
           for(int p=index;p<=k;p++)
           {
               num+=((char)(arr[p]-'0'))*r;
               r*=10;
           }
           flag+=num;
           index=k+1;
       }
       long long num=0,r=1;
           for(int p=index;p<arr.size();p++)
           {
               num+=((char)(arr[p]-'0'))*r;
               r*=10;
           }
           flag+=num;
           sum+=flag;
           //cout<<flag<<" "<<sum<<endl;
    }
    cout<<sum<<endl;
}
