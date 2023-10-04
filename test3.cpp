#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],frr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
    }
    sort(frr,frr+n);

    int counter=0;

  int found=0;

  for(int i=0;i<n;i++)
  {
      if(found>0)break;
      for(int j=i+1;j<n;j++)
      {
         if(arr[i]>arr[j])
         {
             swap(arr[i],arr[j]);
             found++;
             break;
         }
      }
  }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==frr[i])
        {
            counter++;
        }
    }

  cout<<counter<<endl;
}
