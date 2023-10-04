#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5+5;

set<int>s;
map<int,int>mp;
int frr[N];

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int k=arr[i];
        it = s.find(k-1);
        if(*it)
        {
            mp[k]=mp[k-1]+1;
        }
        else
        {
            mp[k]=1;
        }
        s.insert(k);
    }
  int counter=0;
  for(int i=0;i<n;i++)
  {
      counter=max(counter,mp[arr[i]]);
  }
  vector<int>v;
  int p=-1;
  for(int i=n-1;i>=0;i--)
  {
      if(mp[arr[i]]==counter&&p==-1)
      {
          p=arr[i]-1;
          v.push_back(i+1);
      }
      else if(arr[i]==p)
      {
           p=arr[i]-1;
          v.push_back(i+1);
      }

  }
  cout<<counter<<endl;
  for(int i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";cout<<endl;
}
