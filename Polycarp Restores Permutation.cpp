#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    int arr[n+5];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
   int counter=0,flag=0;
   for(int i=0;i<n-1;i++)
   {
       sum+=arr[i];
       counter=min(sum,counter);
       flag=max(flag,sum);
   }
  int m=(-1)*counter;
  m+=1;
  if(m>n)cout<<-1<<endl;
  vector<int>v;

  v.push_back(m);
  for(int i=0;i<n-1;i++)
  {
      m+=arr[i];
      v.push_back(m);
  }

  for(int i=0;i<v.size();i++)
  {
      if(v[i]<0||v[i]>n)
      {
          cout<<-1<<endl;
          return 0;
      }
  }

  for(int i=0;i<n;i++)cout<<v[i]<<" ";

}
