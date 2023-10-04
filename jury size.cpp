/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;


int arr[1111111];

int krr[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
int frr[1111111];

int main()
{
    freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mi,di,pi,ti;

    int n,k=0;

    for(int i=1;i<=12;i++)
    {
       arr[i]=krr[i];
    }

    cin>>n;

    for(int i=0;i<n;i++)
    {
      cin>>mi>>di>>pi>>ti;
      for(int j=arr[mi-1]+di-ti+1111;j<=arr[mi-1]+di-1+1111;j++)
      {
          frr[j]+=pi;
          k=max(frr[j],k);
      }
    }

cout<<k<<endl;
}


