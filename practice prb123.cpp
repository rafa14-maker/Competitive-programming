#include<bits/stdc++.h>
using namespace std;

int arr[100];

int counter = 1e7;

void  f(int k,int n,int m)
{
  if(k>=m)
  {
    counter=min(counter,k);
      return ;
  }

  for(int i=0;i<n;i++)
  {
     f(k*10+arr[i],n,m);
  }

}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
       f(arr[i],n,m);
    }
    cout<<counter<<endl;
}
