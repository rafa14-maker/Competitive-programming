#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;

int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int>arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a]=1;
    }
    int sum=0;
    int counter=0;
    vector<int>v;
    for(int i=1;i<N;i++)
    {
      if(arr[i]!=1)
      {
          sum+=i;
          counter++;
          if(sum==k)
          {
               v.push_back(i);
               break;
          }
          else if(sum>k)
          {
              sum-=i;
              counter--;
              break;
          }
          v.push_back(i);
      }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
