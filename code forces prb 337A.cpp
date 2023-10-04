#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,i,opp=1,c,k=1,l=1;

  cin>>n>>m;

  int arr[m],frr[n];

  for(i=0;i<m;i++)
  {
      cin>>arr[i];
  }

  sort(arr,arr+m);

  if(m%2==0)
  {
      c=m/2;
  }
  else{
    c=(m/2)+1;
  }

  frr[0]=arr[c];

  for(i=0;i<n-1;i++)
  {
      if(i%2==0)
      {
          frr[opp]=arr[c-k];
          opp++;
          k++;
      }
      else{
        frr[opp]=arr[c+l];
        opp++;
        l++;
      }
  }


  sort(frr,frr+n);


  cout<<frr[n-1]-frr[0]<<endl;

  return 0;

}
