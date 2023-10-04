#include<bits/stdc++.h>
using namespace std;

int arr[1000]={0};
int win[1000]={0};
int main()
{
    int n;
    cin>>n;
  int k= n*(n-1)/2-1;
    for(int i=1;i<=k;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a]++;
         arr[b]++;
        win[a]++;

    }

   /* for(int i=1;i<=n;i++)
    {
        cout<<win[i]<<" ";
    }
    cout<<endl;

     for(int i=1;i<=n;i++)
     {
         cout<<arr[i]<<" ";
     }*/

   int  flag=2,a=0,b=0,c,d;
    for(int i=1;i<=n;i++)
    {
      if(arr[i]<n-1&&a==0)
      {
         a=i;
         c=win[a];
      }
     else if(a!=0&&arr[i]<n-1)
      {
          b=i;
          d=win[b];
      }
    }
    if(d>c)
    {
        swap(a,b);
    }
    cout<<a<<" "<<b<<endl;
}
