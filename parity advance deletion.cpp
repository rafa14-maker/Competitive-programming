/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,odd=0,even=0;
    cin>>n;

    int arr[n+5];

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(arr[i]%2==0)even++;
      else odd++;
    }
    int k=min(even,odd);
    if(even==odd)
    {
        even=0;
        odd=0;
    }
   else if(k==even)
    {
        even-=k;
        odd=odd-(k+1);
    }
    else if(k==odd)
    {
        odd-=k;
        even=even-(k+1);
    }

    long long sum=0;

    sort(arr,arr+n);

    for(int i=0;i<n,even>0;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
            even--;
        }
    }
      for(int i=0;i<n,odd>0;i++)
    {
        if(arr[i]%2==1)
        {
            sum+=arr[i];
            odd--;
        }
    }
    cout<<sum<<endl;
}



